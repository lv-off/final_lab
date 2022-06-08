#include "engine.h"

void Engine::draw()
{
    m_Window.clear(Color::White);

    m_Window.draw(m_BackgroundSprite);
    m_Window.draw(m_Shop.getSprite());
	m_Window.draw(m_Tree.getSprite());
    m_Window.draw(m_Player.getSprite());

    m_Window.display();
}