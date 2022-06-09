#include "engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Player.update(dtAsSeconds);
    m_Tree.update(&m_Player);
    m_Shop.update(&m_Player);
    m_House.update(&m_Player,&m_End);
}