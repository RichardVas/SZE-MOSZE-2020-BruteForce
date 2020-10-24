#pragma once
#include<iostream>
#include<string>
#include<stdexcept>
#include<fstream>
#include<cmath>
class Fighter {
	double HP
		/**
		 * Characters health points.
		 */;
	const double DMG
		/**
		 * Characters damage.
		 */;
	const double attackcooldown
		/**
		 * Characters attack speed.
		 */;
	const std::string name
		/**
		 * Characters name.
		 */;
	void take_dmg(Fighter &enemy)
		/**
		 * Method for character taking damage.
		 */;
	void deal_dmg(Fighter &enemy)
		/**
		 * Method for character dealing damage.
		 */;

	double MaxHP;

	int level = 1;
	int exp = 0;


	void levelUP();

	public:
	/**
	 * A class that contains the attributes of fighters.
	 * They have HP, Damage, attackcooldown which they get from input, and their own name.
	 */
	
	Fighter(const std::string &iname, double ihp, int idmg) : name(iname), HP(ihp), DMG(idmg),MaxHP(ihp), attackcooldown(acd) {}
	~Fighter() {}
};
	double getHP() const { return HP; }
	double getDMG() const { return DMG; }
	int getLVL() const { return level; }
	int getXP() const { return exp; }

	double getCD() const { return attackcooldown; }
	std::string getName() const { return name; }

	Fighter& duel(Fighter *enemy)/**
		 * Method for 2 characters fighting.
		 */;

		

	friend std::ostream& operator<<(std::ostream& os, const Fighter& fi)
		/**
		 * Operator overload to make the class printable.
		 */;

	static Fighter parseUnit(std::string fname)
		/**
		 * Static method to process input json files.
		 */;




};
