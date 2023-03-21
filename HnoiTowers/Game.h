#pragma once
#include <array>
#include <optional>
#include "Tower.h"

namespace experis
{

class Game
{
public:
	static constexpr int NUM_TOWERS = 3;

	explicit Game() = delete;
	explicit Game(int a_bricks);
	Game(const Game& a_other) = delete;
	Game& operator=(Game& a_other) = delete;
	~Game();

	int GetNumBricksInTower(int a_numTower);
	int GetBrickWeight(int a_tower, int a_brick);
	void Move(int a_from, int a_to);

private:
	std::array<Tower, NUM_TOWERS> m_towers;
};

} // experis

