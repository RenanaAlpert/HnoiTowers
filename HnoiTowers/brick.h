#pragma once

namespace experis
{

class Brick
{
public:
	explicit Brick();
	explicit Brick(int a_weight);
	Brick(const Brick& a_other) = delete;
	void operator=(Brick& a_other);
	~Brick();

	int GetWeight();

private:
	int m_weight;
};

} // experis