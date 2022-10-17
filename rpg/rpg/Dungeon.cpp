#include "framework.h"
using namespace std;


void Dungeon::printHorizontalWalls(int length, bool fullRow)
{
	for (int i = 0; i < length; i++)
	(!fullRow) ? cout << "+--  --" : cout << "+------";
	cout << "+" << endl;
}
void Dungeon::printVerticalWalls(int length)
{
	string roomSpace = "      ";

	// Upper part
	for (int i = 0; i < length; i++)
		cout << "|" << roomSpace;
	cout << "|" << endl;

	// Mid part
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			cout << "|" << roomSpace;
			continue;
		}
		cout << " " << roomSpace;
	}
	cout << "|" << endl;

	// Bottom part
	for (int i = 0; i < length; i++)
		cout << "|" << roomSpace;
	cout << "|" << endl;
}

/*
 * Main printing method
 */
void Dungeon::printRooms()
{
	printHorizontalWalls(LENGTH, true);

	// Double loop for printing every room in the 2D array dungeon
	for (int y = 1; y <= WIDTH; y++)
	{
		printVerticalWalls(LENGTH);
		(y == WIDTH) ? printHorizontalWalls(LENGTH, true) : printHorizontalWalls(LENGTH, false);
	}
}



