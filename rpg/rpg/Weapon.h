#pragma once

class Weapon
{
private:
	/*------------------------- Attributes -------------------------*/

	string name;
	int attack;

public:
	Weapon(string cName, int cAttack);
	string getName();
	void setName(string newName);
	int getAttack();
	void setAttack(int newAttack);

};

