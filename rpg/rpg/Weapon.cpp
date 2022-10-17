#include "framework.h"


	/*------------------------- Constructor -------------------------*/

    Weapon::Weapon(string cName, int cAttack)
	{
		name = cName;
		attack = cAttack;
	}

	/*------------------------- Getters and setters -------------------------*/
// Name
	string Weapon::getName()
	{
		return name;
	}
	void Weapon::setName(string newName)
	{
		name = newName;
	}
	// Attack
	int Weapon::getAttack()
	{
		return attack;
	}
	void Weapon::setAttack(int newAttack)
	{
		attack = newAttack;
	}


