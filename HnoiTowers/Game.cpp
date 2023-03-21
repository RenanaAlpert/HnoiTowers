#include "Game.h"
#include <iostream>

namespace experis
{

Game::Game(int a_bricks)
	: m_towers()
{
	for (int i = a_bricks - 1; i >= 0; --i)
	{
		Brick b{i * 2 + 1};
		m_towers.at(0).Add(b);
	}
}

Game::~Game()
{
}

int Game::GetNumBricksInTower(int a_numTower)
{
	return m_towers.at(a_numTower).BricksNum();
}

int Game::GetBrickWeight(int a_tower, int a_brick)
{
	return this->m_towers.at(a_tower).At(a_brick).GetWeight();
}

void Game::Move(int a_from, int a_to)
{
	if (m_towers.at(a_from).HasBricks())
	{
		std::cout << "in move\n";
		if (this->GetNumBricksInTower(a_to) < Tower::MAX_BRICK)
		{
			std::cout << this->GetBrickWeight(a_from, 0);
			std::cout << this->GetBrickWeight(a_to, 0);
			if (this->GetBrickWeight(a_from, 0) < this->GetBrickWeight(a_to, 0))
			{
				m_towers.at(a_to).Add(m_towers.at(a_from).At(0));
				m_towers.at(a_from).Pop();
			}
		}
	}
}

} //experis