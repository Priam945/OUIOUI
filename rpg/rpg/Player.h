#pragma once

class Player
{
private:

public:
	/*------------------------- Attributes -------------------------*/
	string name;
	int health;

	int armor;
	int weapon;

	int coordX;
	int coordY;
	string cName;
	int cHealth;
	
	/*------------------------- Constructor -------------------------*/
	Player();
	virtual ~Player();
	string getName();
	void setName(string newName);
	int getHealth();
	void setHealth(int newHealth);
	int getWeapon();
	void setWeapon(int newWeapon);
	int getArmor();
	void setArmor(int newArmor);
	int getCoordX();
	void setCoordX(int newCoordX);
	int getCoordY();
	void setCoordY(int newCoordY);
	void dropWeapon();
	void dropArmor();

};

