#include "player.h"
#include "engine.h"

Player::Player()
{
    m_Speed = 400;

    m_Texture.loadFromFile("player.png");
    m_Sprite.setTexture(m_Texture);

    m_Position.x = 960;
    m_Position.y = 980;

}

Sprite Player::getSprite()
{
    return m_Sprite;
}

void Player::moveLeft()
{
    m_LeftPressed = true;
}

void Player::moveRight()
{
    m_RightPressed = true;
}

void Player::stopLeft()
{
    m_LeftPressed = false;
}

void Player::stopRight()
{
    m_RightPressed = false;
}


void Player::update(float elapsedTime)
{
    if (m_RightPressed && 1860 > m_Position.x) //надо поставить ограничение
    {
        m_Position.x += m_Speed * elapsedTime;

    }

    if (m_LeftPressed && m_Position.x - 2 * m_Sprite.getScale().x > 0)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    m_Sprite.setPosition(m_Position);

}