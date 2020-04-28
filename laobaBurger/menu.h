#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <time.h>
#include <vector> 
#include <unistd.h>
#include <iostream>

#define MAX_ITEMS_NUM 3
#define N 10
#define M 20
#define SIZE 64
#define W SIZE*N
#define H SIZE*M

class Menu
{
public:
    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem(){return seletedItemIdx;}

private:
    int seletedItemIdx;
    sf::Font font;
    sf::Text menu[MAX_ITEMS_NUM];
};
