#pragma once
#include <SFML/Graphics.hpp>
#include "player.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    Player m_Player;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    Engine();

    void start();

};
