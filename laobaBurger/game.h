#include "menu.h"

using namespace sf;

enum direction { Down, Left, Right, Up };
enum food_type { Baba, Coudoufu, Ningmeng, Fulu, Hanbaoer, FOOD_SIZE};

class Game
{
public:
    Game();
    ~Game();

    void Init();
    void start(sf::RenderWindow &window);

private:

    int dir;
    void Tick();
    void pre_start(sf::RenderWindow &window);

    Sound food_sound[FOOD_SIZE];
    Sound puke_sound;
    SoundBuffer puke_buffer;
    SoundBuffer buffer[FOOD_SIZE];
    Texture background, coudoufu_bg, ningmeng_bg, baba_bg, fulu_bg, 
    hanbaoer_bg, laoba_bg, success_bg, fail_bg;
    Sprite sprite_bg, sprite_laoba, sprite_success, sprite_fail;
    Sprite sprite[FOOD_SIZE];

    std::vector<int> body;
    std::vector<int> answer;


    struct Snake
    {
        int x,y;
    } s[100];

    struct Stuff
    {
        int x,y;
    }f[FOOD_SIZE], laoba;

};