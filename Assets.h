#pragma once

#include "Animation.h"
#include "Common.h"

enum eAssetsTypes {
    TEXTURE = 84,
    ANIMATION = 65,
    FONT = 70
};

enum eTextureTypes {
    marioBRICK = 1,
    megaRUN,
    megaJUMP,
    megaSTAND,
    megaSHOT,
    megaBuster,
    marioExplosion,
    marioBUSH,
    marioSMALLBUSH = 10,
    marioCLOUD = 12,
    marioBOOMBA,
    marioBUSHER = 14,
    marioPIPE,
    marioBCLOUD = 16,
    marioGOODEATH,
    TLAST
};


enum eFontTypes {
    NUMBERS = 1,
    PIXEL,
    FLAST
};


class Assets {  
    std::map<eTextureTypes, sf::Texture> m_textureMap;
    std::map<eAnimationTypes, Animation> m_animationMap;
    std::map<eFontTypes, sf::Font> m_fontMap;

    void addTexture(eTextureTypes &texture_types, const std::string  &path, bool smooth  = true );

    void addAnimation(eAnimationTypes &animation_types, eTextureTypes &texture_types, size_t frameCount, size_t speed );

    void addFont(eFontTypes& fontName, const std::string& path);

public:
    Assets();

    void loadFromFile(const std::string &path);

    const sf::Texture &getTexture(eTextureTypes texture_types) const;
    const Animation &getAnimation(eAnimationTypes animation_types) const;
    const sf::Font &getFont(eFontTypes fontName) const; 
}; 
