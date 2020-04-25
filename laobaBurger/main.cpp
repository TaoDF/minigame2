#include "game.h"

using namespace sf;

int main()
{
    Sound intro_sound;
    SoundBuffer intro_buffer;
    if (!intro_buffer.loadFromFile("./sound/lao8burger.wav"))
        std::cout<<"err"<<std::endl;
    intro_sound.setBuffer(intro_buffer);


    Game game;
    game.Init();
    Menu menu(W,H);
    RenderWindow window(VideoMode(W,H),"lao8 Burger Shop");
    while(window.isOpen())
    {
        Event e;
        while(window.pollEvent(e))
        {
            if(e.type == Event::Closed)
            {
                window.close();
            }
            if(e.type == Event::KeyReleased)
            {
                if(e.key.code == Keyboard::Up) menu.MoveUp();
                else if(e.key.code == Keyboard::Down) menu.MoveDown();
                else if(e.key.code == Keyboard::Return) 
                {
                    switch (menu.GetPressedItem())
                    {
                        case 0:
                            intro_sound.stop();
                            game.start(window);
                            break;
                        case 1:
                            intro_sound.play();
                            break;
                        case 2:
                            return 0;
                    }
                }
            }
        }
        window.clear();
        menu.draw(window);
        window.display();
    }

    return 0;
}