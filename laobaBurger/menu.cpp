#include "menu.h"

Menu::Menu(float width, float height)
{
   if(!font.loadFromFile("./font/youeryuan.ttf"))
   {
       std::cout<<"cannot load font"<<std::endl;
       // handle err
   }

    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::Yellow);
    menu[0].setString("Start Eating");
    menu[0].setPosition(sf::Vector2f(width/3, height/(MAX_ITEMS_NUM+1)*1));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::White);
    menu[1].setString("How to Eat");
    menu[1].setPosition(sf::Vector2f(width/3, height/(MAX_ITEMS_NUM+1)*2));

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::White);
    menu[2].setString("I'm Full");
    menu[2].setPosition(sf::Vector2f(width/3, height/(MAX_ITEMS_NUM+1)*3));

    seletedItemIdx = 0;
}

Menu::~Menu()
{
    
}

void Menu::draw(sf::RenderWindow &window)
{
    for(int i = 0; i < MAX_ITEMS_NUM; i++)
    {
        window.draw(menu[i]);
    }
}

void Menu::MoveUp()
{
    if(seletedItemIdx-1>=0)
    {
        menu[seletedItemIdx].setFillColor(sf::Color::White);
        seletedItemIdx--;
        menu[seletedItemIdx].setFillColor(sf::Color::Yellow);
    }
}

void Menu::MoveDown()
{
    if(seletedItemIdx+1<MAX_ITEMS_NUM)
    {
        menu[seletedItemIdx].setFillColor(sf::Color::White);
        seletedItemIdx++;
        menu[seletedItemIdx].setFillColor(sf::Color::Yellow);
    }
}