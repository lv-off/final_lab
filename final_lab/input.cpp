#include "Engine.h"

void Engine::input()
{
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Player.moveLeft();
    }
    else
    {
        m_Player.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Player.moveRight();
    }
    else
    {
        m_Player.stopRight();
    }

}