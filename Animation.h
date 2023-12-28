#pragma once

#include "Vec2.h"
#include <vector>
#include <SFML/Graphics.hpp>

enum eAnimationTypes {
	AniBRICK = 1,
	RUN,
	JUMP,
	STAND,
	SHOT,
	BUSTER,
	EXPLOSION,
	AniBUSH = 10,
	AniCLOUDSMALL = 12,
	AniSMALLBUSH = 14,
	AniPIPE,
	AniBUSHER,
	AniGOOMBA,
	AniBCLOUD = 18,
	AniGOODEATH,
	ALAST
};

class Animation {
	// m_frameCount: Total number of frames of animation
	// m_currentFrame: Current frame being played by animation
	// m_speed: Speed to play this animation
	// m_size: Size of animation frame

	sf::Sprite      m_sprite; 
	size_t          m_frameCount = 1; 
	size_t          m_currentFrame = 0;
	size_t          m_speed = 0;
	Vec2            m_size = { 1,1 }; 
	eAnimationTypes m_name;

public: 
	Animation();
	Animation(eAnimationTypes& name, const sf::Texture& t); 
	Animation(eAnimationTypes& name, const sf::Texture& t, size_t frameCount, size_t speed);

	void update();
	bool hasEnded() const;
	eAnimationTypes getName() const;
	const Vec2& getSize() const;
	sf::Sprite& getSprite();
};