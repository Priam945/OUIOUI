#include "framework.h"

	/*------------------------- Constructor -------------------------*/

Armor::Armor(string cName, int cDefense)
	{
		name = cName;
		defense = cDefense;
	}

Armor::~Armor()
{
}
/*------------------------- Getters and setters -------------------------*/
// Name
string Armor::getName()
{
	return name;
}


// Defense
void Armor::setName(string newName)
{
	name = newName;
}

int Armor::getDefense()
{
	return defense;
}

void Armor::setDefense(int newDefense)
{
	defense = newDefense;
}



