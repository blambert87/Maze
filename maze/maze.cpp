void Maze::mazeTraversal(char maze[][COLS], int row, int col, int direction)
{

	static bool flag = false;
	static bool start = true;
	bool isEdge = 0;
	maze[row][col] = x;
}

void Maze::printMaze(const char maze[][COLS]);
{
	isEdge = cordsAreEdge(row, col);

	if (isEdge && row != xCoord && col != yCoord && !start)
	{
		cout << "Maze exited successfully";
		return;
	else if (row == xCoord && col == yCoord && flag == true)
		cout << "Reached start of the maze";
	return;
	else
		flag = true



