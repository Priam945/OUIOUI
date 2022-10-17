#pragma once

class Monster
{
private:
	/*------------------------- Attributes -------------------------*/

	std::string name;
	int attack;
	int health;

public:
	Monster(std::string cName, int cAttack, int cHealth);
	virtual ~Monster();
	std::string getName();
	void setName(std::string newName);
	int getAttack();
	void setAttack(int newAttack);
	int getHealth();
	void setHealth(int newHealth);
	void draw(std::string type);

};

