#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Player.update(dtAsSeconds);
}