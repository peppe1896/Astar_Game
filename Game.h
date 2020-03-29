#ifndef LABPROGRCLION_GAME_H
#define LABPROGRCLION_GAME_H

#include "player.h"
#include "Node_map.h"

class Game
{
private:
    //Frame
    sf::RenderWindow* window;
    sf::VideoMode vMode;
    sf::Event event{};

    //Mappa
    Node_map* mappa;
    std::string indirizzoMappa;

    //Game Character
    player* hero;

    //Background
    sf::RectangleShape background;
    sf::Texture background_texture;

    //Di quanti pixel spostare la mappa verso dx e verso sud?
    float scalex , scaley;
    float offsetx, offsety;
    float gridSize_x, gridSize_y;

public:
    Game(int config = 64);
    ~Game();

    void update();
    void render(sf::RenderTarget* target);

    void run();
};


#endif //LABPROGRCLION_GAME_H