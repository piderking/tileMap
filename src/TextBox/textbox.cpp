
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>
#include <iostream>
#include "/home/piderking/tileMap/src/fonts/font.cpp"

// back space
class TextBox{
    
public:
    TextBox(int);
    int length;
    int len = 0;
    std::string playerInput; // what has the player typed
    bool backSpace(){ //function declaration and definiton
        if (len > 0){ // we dont want to dunmp the core
            playerInput.pop_back(); // deletes the last char
            std::cout << playerInput << "\n";
            len -= 1;
            std::cout << len << std::endl;
            return true; // we can use if to check
    }
        return false;// this means it is 0 and should dump the core
    }
    void addText(sf::String add) { 
        if (len < length){
            playerInput += add; //just for cleaner out put
            std::cout << len << " \n";
            len += 1;
            
        }
        else{
            std::cout << length << std::endl;
            std::cout << "length is too large \n";
            }
        }            
    

    std::string Input(){
        return playerInput;
    }
};


TextBox::TextBox(int lengt){
    length = lengt;
    std::cout << length << std::endl;
}
