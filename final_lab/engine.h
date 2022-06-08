#pragma once
#include <SFML/Graphics.hpp>
#include "gameobjects.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    Player m_Player;
    Tree m_Tree;
    Shop m_Shop;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    Engine();
    void start();

};

