#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>


class CustomFont {
public:
    sf::Text text;
    sf::Font font;
    std::string playerInput;

    
    sf::Text createText(sf::String InsideText, int X, int Y, int size=100) {
        if ( !font.loadFromFile( "src/fonts/CoolFont.ttf")) {
            std::cout << "error load co0ol font" << std::endl;
        }

        text.setFont(font);

        // set the string to display
        text.setString(InsideText);

        // set the character size
        text.setCharacterSize(size); // in pixels, not points!
        
        // set the color
        text.setFillColor(sf::Color::White);

        // set the text style
        text.setStyle(sf::Text::Bold);
        text.setPosition(X, Y);
        return text;
    }
    
    
};
