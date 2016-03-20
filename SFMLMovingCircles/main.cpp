#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "ResourcePath.hpp"

int main(int argc, char** argv)
{

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Moving Circles");

    //Create three circles with a 50 pixel radius
    sf::CircleShape circleRed(50);
    sf::CircleShape circleGreen(50);
    sf::CircleShape circleBlue(50);
    
    //Add the appropriate colors to our circles
    circleRed.setFillColor(sf::Color(255, 0, 0));
    circleGreen.setFillColor(sf::Color(0, 255, 0));
    circleBlue.setFillColor(sf::Color(0, 0, 255));
    
    float xRed = 100;
    float yRed = 100;
    
    float xGreen = 200;
    float yGreen = 200;
    
    float xBlue = 300;
    float yBlue = 300;
    
    circleRed.setPosition(xRed, yRed);
    circleGreen.setPosition(xGreen, yGreen);
    circleBlue.setPosition(xBlue, yBlue);
    
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

        window.clear();
        
        window.draw(circleRed);
        window.draw(circleGreen);
        window.draw(circleBlue);

        window.display();
    }

    return EXIT_SUCCESS;
}
