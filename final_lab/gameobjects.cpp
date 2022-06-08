#include "gameobjects.h"

Player::Player()
{
    m_Speed = 400;

    m_Texture.loadFromFile("soloplayer.png");
    m_Sprite.setTexture(m_Texture);

    m_Position.x = 120;
    m_Position.y = 480;

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
    if (m_RightPressed && 1700 > m_Position.x) //надо поставить ограничение адекватное
    {
        m_Position.x += m_Speed * elapsedTime;

    }

    if (m_LeftPressed && m_Position.x - 2 * m_Sprite.getScale().x > 0)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    m_Sprite.setPosition(m_Position);

}

Tree::Tree()
{
    m_Texture.loadFromFile("tree.png");
    m_Sprite.setTexture(m_Texture);

    m_Position.x = 520;
    m_Position.y = 320;

    m_Sprite.setPosition(m_Position);

    meow_Buffer.loadFromFile("meow.ogg");
    meow.setBuffer(meow_Buffer);

}

void Tree::update(Player* m_Player)
{
    if (Keyboard::isKeyPressed(Keyboard::F))
    {
	    if (m_Player->m_Position.x >= m_Position.x && m_Player->m_Position.x < m_Position.x + m_Texture.getSize().x*0.33)
	    {
            if (m_Player->m_Progress == 0) {
                m_Player->m_Progress = 1;
                m_Texture.loadFromFile("emptytree.png");
                m_Sprite.setTexture(m_Texture);

                m_Player->m_Texture.loadFromFile("player.png");
                m_Player->m_Sprite.setTexture(m_Player->m_Texture);

                meow.play();
            }
            if (m_Player->m_Progress == 2) {
                m_Player->m_Progress = 3;
                m_Texture.loadFromFile("newemptytree.png");
                m_Sprite.setTexture(m_Texture);

                m_Player->m_Texture.loadFromFile("solocat.png");
                m_Player->m_Sprite.setTexture(m_Player->m_Texture);

            }

	    }
    }
}

Shop::Shop()
{
    m_Texture.loadFromFile("shop.png");
    m_Sprite.setTexture(m_Texture);

    m_Position.x = 1220;
    m_Position.y = 280;

    m_Sprite.setPosition(m_Position);


}

void Shop::update(Player* m_Player)
{
	if (Keyboard::isKeyPressed(Keyboard::F) && m_Player->m_Progress == 1)
    {
        if (m_Player->m_Position.x >= m_Position.x && m_Player->m_Position.x < m_Position.x + m_Texture.getSize().x * 0.33)
        {
            m_Player->m_Progress = 2;

            m_Player->m_Texture.loadFromFile("cat.png");
            m_Player->m_Sprite.setTexture(m_Player->m_Texture);

        }
    }
}
