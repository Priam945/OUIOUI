
#include "framework.h"
#include <string>
using namespace std;


	/*------------------------- Getters and setters -------------------------*/
// Name
Player::Player()
{
	name = cName;
	health = cHealth;

	weapon = NULL;
	armor = NULL;

	coordX = 0;
	coordY = 0;
}

Player::~Player()
{
}

	string Player::getName()
	{
		return name;
	}
	void Player::setName(string newName)
	{
		name = newName;
	}
	// Health
	int Player::getHealth()
	{
		return health;
	}
	void Player::setHealth(int newHealth)
	{
		health = newHealth;
	}
	// Weapon
	int Player::getWeapon()
	{
		return weapon;
	}
	void Player::setWeapon(int newWeapon)
	{
		weapon = newWeapon;
	}
	// Armor
	int Player::getArmor()
	{
		return armor;
	}
	void Player::setArmor(int newArmor)
	{
		armor = newArmor;
	}
	// CoordX
	int Player::getCoordX()
	{
		return coordX;
	}
	void Player::setCoordX(int newCoordX)
	{
		coordX = newCoordX;
	}
	// CoordY
	int Player::getCoordY()
	{
		return coordY;
	}
	void Player::setCoordY(int newCoordY)
	{
		coordY = newCoordY;
	}
