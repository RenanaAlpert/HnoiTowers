#include <iostream>
#include "PrinterGame.h"

namespace experis
{

PrinterGame::~PrinterGame()
{
}

void PrinterGame::PrintBrick(int a_weight)
{
	int spaces = (9 - a_weight) / 2;
	for (int i = 0 ; i < spaces ; ++i)
	{
		std::cout << " ";
	}
	for (int i = 0 ; i < a_weight ; ++i)
	{
		std::cout << "*";
	}
	for (int i = 0 ; i < spaces ; ++i)
	{
		std::cout << " ";
	}
	std::cout << "\t";
}

void PrinterGame::PrintLevel(Game& a_game, int a_tower, int a_line)
{
	int numBricks = a_game.GetNumBricksInTower(a_tower);
	int numBrick = numBricks - a_line; 
	if(numBrick < 0)
	{
		std::cout << "    |    \t";
	}
	else
	{
		PrintBrick(a_game.GetBrickWeight(a_tower, numBrick));
	}
}

void PrinterGame::Print(Game& a_game)
{
	for (int line = Tower::MAX_BRICK; line > 0; --line)
	{
		for (int i = 0 ; i < Game::NUM_TOWERS ; ++i)
		{
			PrintLevel(a_game, i, line);
		}
		std::cout << "\n";
	}

	std::cout << "---------\t---------\t---------\n";
}

} //experis