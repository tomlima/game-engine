#include <iostream>;
#include <memory>; 
#include <SFML/Graphics.hpp>
#include "imgui.h";
#include "imgui-SFML.h";


int main()
{
    sf::Window window;
    window.create(sf::VideoMode(800, 600), "Just window setup");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close(); 
            }
           
        }
    
    }
    return 0;
}