#pragma once

class Dungeon
{
private:
	/*------------------------- Attributes -------------------------*/

	const int LENGTH = 8; // x
	const int WIDTH = 5; // y	

public:
	void printRooms();
	void printVerticalWalls(int length);
	void printHorizontalWalls(int length, bool fullRow);
};
