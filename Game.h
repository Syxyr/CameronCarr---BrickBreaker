#pragma once
#include "Box.h"
#include "Ball.h"
#include <vector>
using namespace std;

class Game
{
	Ball ball;
	Box paddle;

	// TODO #1 - Instead of storing 1 brick, store a vector of bricks (by value)
	Box brick;
	std::vector<Box> bricks;

	char loss[34] = "YOU LOSE!!! PRESS \'R\' TO RESET...";
	char victory[33] = "YOU WIN!!! PRESS \'R\' TO RESET...";

public:
	Game();
	bool Update();
	void Render() const;
	void Reset();
	void ResetBall();
	void CheckCollision();
};