#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "ResourcePath.hpp"

int main(int argc, char** argv)
{

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) {
                window.close();
            }

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        window.clear();

        window.display();
    }

    return EXIT_SUCCESS;
}
