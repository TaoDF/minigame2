#include "menu.h"

using namespace sf;

enum direction { Down, Left, Right, Up };
enum food_type { Baba, Coudoufu, Ningmeng, Fulu, Hanbaoer, FOOD_SIZE};

class Game
{
public:
    Game();
    ~Game();

    void start(sf::RenderWindow &window);

private:

    int dir;
    void Init();
    void Tick();

    Sound food_sound[FOOD_SIZE];
    Sound puke_sound;
    SoundBuffer puke_buffer;
    SoundBuffer buffer[FOOD_SIZE];
    Texture background, coudoufu_bg, ningmeng_bg, baba_bg, fulu_bg, hanbaoer_bg;
    Sprite sprite1;
    Sprite sprite[FOOD_SIZE];

    std::vector<int> body;

    struct Snake
    {
        int x,y;
    } s[100];

    struct Food
    {
        int x,y;
    }f[FOOD_SIZE];



};