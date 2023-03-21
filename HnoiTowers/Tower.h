#pragma once
#include <array>
#include "brick.h"

namespace experis
{

class Tower
{
public:
	static constexpr size_t MAX_BRICK = 5;

	explicit Tower();
	//explicit Tower(int a_bricks);
	Tower(const Tower& a_other) = delete;
	Tower& operator=(Tower& a_other) = delete;
	~Tower();

	void Add(Brick& a_brick);
	void Pop();
	int BricksNum() const;
	Brick& At(int a_index);
	bool HasBricks() const;

private:
	std::array<Brick, MAX_BRICK> m_bricks;
	int m_numBricks;
};

} // experis

