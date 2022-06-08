#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

class Gameobject
{
public:
    Vector2f m_Position;

    Sprite m_Sprite;

    Texture m_Texture;

    Sprite getSprite()
    {
        return m_Sprite;
    }
	
};

class Player: public Gameobject
{
public:
    Player();

    void moveLeft();

    void moveRight();

    void stopLeft();

    void stopRight();

    void update(float elapsedTime);

    int m_Progress = 0;

private:

    bool m_LeftPressed;
    bool m_RightPressed;

    float m_Speed;

};

class Tree: public Gameobject
{
public:
    SoundBuffer meow_Buffer;
    Sound meow;
    bool is_used = false;
    Tree();
    void update(Player* m_Player);
};

class Shop: public Gameobject
{
public:
    bool is_used = false;
    Shop();
    void update(Player* m_Player);
};