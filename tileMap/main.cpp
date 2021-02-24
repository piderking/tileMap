#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include "src/TextBox/textbox.cpp"

// declare screen size
int height = 800;
int width = 800;
sf::View veiw;
// Declare the Window
sf::RenderWindow window(sf::VideoMode(width, height), "Tile Map Editor");
// Hide mouse Cursour
// Declare the Fonts from font.cpp
CustomFont fonts;

//main function

int main(){

    // Game loop, is open means window is open
    TextBox box(50);

    while (window.isOpen())
    {
        sf::Event event; // creating the event
        while (window.pollEvent(event)) //polls the event object to see if there is anything
        {
   
            switch (event.type)
            {
            case sf::Event::Closed:
                
                window.close();
                break;


            case sf::Event::TextEntered:
                if (event.text.unicode < 128)
                {
                    std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
                    box.addText(static_cast<char>(event.text.unicode));
                    // text .setString(event.text.unicode);
                    //box.addText(event.text.unicode);
                    break;
                }
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace)){
                    box.backSpace();
                    std::cout << "backspace\n";
                    break;  
            }


        }        
        window.clear(sf::Color::Cyan);
        
        window.draw(fonts.createText(box.Input(), 59, 59)); //Xpos Ypos Size
        
        window.display();
    }
    window.close();
    return 0;

}
