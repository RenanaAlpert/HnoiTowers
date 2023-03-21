#include "Brick.h"

namespace experis
{

Brick::Brick()
	: m_weight(0)
{
}

void Brick::operator=(Brick& a_other)
{
	this->m_weight = a_other.m_weight;
}

Brick::Brick(int a_weight)
	: m_weight(a_weight)
{
}

Brick::~Brick()
{
}

int Brick::GetWeight()
{
	return this->m_weight; 
}

}