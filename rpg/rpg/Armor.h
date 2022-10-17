#pragma once

class Armor
{
private:
	/*------------------------- Attributes -------------------------*/

	string name;
	int defense;

public:
	Armor(string cName, int cDefense);
	virtual ~Armor();
	string getName();
	void setName(string newName);
	int getDefense();
	void setDefense(int newDefense);

};

