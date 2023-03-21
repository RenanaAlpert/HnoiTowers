#include "Tower.h"
#include <iostream>

namespace experis
{

Tower::Tower()
	: m_numBricks(0), m_bricks()
{
}

//Tower::Tower(const Tower& a_other)
//{
//
//}

Tower::~Tower()
{
}

void Tower::Add(Brick& a_brick)
{
	for(int i = this->m_numBricks ; i > 0 ; --i)
	{
		this->m_bricks.at(i) = this->m_bricks.at(i - 1);
	}
	this->m_bricks.at(0) = a_brick;
	++this->m_numBricks;
}

void Tower::Pop()
{
	for (int i = 0 ; i < this->m_numBricks - 1 ; ++i)
	{
		this->m_bricks.at(i) = this->m_bricks.at(i + 1);
	}
	Brick b{};
	this->m_bricks.at(this->m_numBricks - 1) = b;
	--this->m_numBricks;
}

int Tower::BricksNum() const
{
	return this->m_numBricks;
}

Brick& Tower::At(int a_index)
{
	return this->m_bricks.at(a_index);
}

bool Tower::HasBricks() const
{
	std::cout << this->m_numBricks << "\n";
	if(this->m_numBricks > 0)
	{
		return true;
	}
	return false;
}

} //experis
