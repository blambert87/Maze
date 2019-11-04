#include <iostream>
#include <iomanip>
#pragma once
using namespace std;


class Maze
{
private:
	enum Direction {DOWN, RIGHT, UP, LEFT};
	static const int ROWS = 12;
	static const int COLS = 12;
public:
	void mazeTraversal(char maze[][COLS], int row, int col, int direction);
	void printMaze(const char maze[][COLS]);
	bool validMove(const char maze[][COLS], int row, int col);
	bool coordsAreEdge(int row, int col);
};