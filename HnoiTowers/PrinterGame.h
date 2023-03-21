#pragma once
#include "Game.h"

namespace experis
{

class PrinterGame
{
public:
	explicit PrinterGame() = delete;
	PrinterGame(const PrinterGame& a_other) = delete;
	PrinterGame& operator=(PrinterGame& a_other) = delete;
	~PrinterGame();

	static void Print(Game& a_game);

private:
	static void PrintLevel(Game& a_game, int a_numBricks, int a_line);
	static void PrintBrick(int a_weight);
};

} // experis