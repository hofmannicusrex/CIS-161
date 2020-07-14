#pragma once
#include<string>
using namespace std;
class Pokemon
{
private:
	string pokemonName;
	int pokemonLevel;
	int pokemonHitPoints;
	int pokemonSpeed;
	string elementalTypeOne;
	string elementalTypeTwo;
	//attackOne, attackTwo, attackThree, attackFour  ????
public:
	Pokemon(string, int, int, int, string, string);  // CONSTRUCTOR
	~Pokemon();                                      // DESTRUCTOR
	// MUTATORS
	void setPokemonName(string);
	void setPokemonLevel(int);
	void setPokemonHitPoints(int);
	void setPokemonSpeed(int);
	void setElementalTypeOne(string);
	void setElementalTypeTwo(string);
	// ACCESSORS
	string getPokemonName() const;
	int getPokemonLevel() const;
	int getPokemonHitPoints() const; //	THIS FUNCTION MIGHT NOT BE ABLE TO BE A CONSTANT
	int getPokemonSpeed() const;
	string getElementalTypeOne() const;
	string getElementalTypeTwo() const;

	// MEMBER FUNCTIONS
	virtual string determineTypeAdvantage(); // NOT SURE WHAT THE RETURN TYPE SHOULD BE YET...STRING?
	void friendlyPokemonFaint();  // Determines when/if your Pokemon faints
	void opposingPokemonFaint();  // Determines when/if the opposing Pokemon faints
	int takeDamage();
	//void determineAttackOrder(Pokemon, Pokemon); FUNCTION WAS MOVED TO THE MAIN PROGRAM FILE
	/*
	string determineAttackOrder() const; // NOT SURE WHAT THE RETURN TYPE SHOULD BE YET...BOOLEAN?
	int decreaseHitPoints();
	int increaseHitPoints(); // THIS IS JUST IN CASE A MOVE ALSO HEALS THE POKEMON USING IT (E.G. MEGA DRAIN)
	int useAttackMove();
	// bool isSuperEffective(); ????
	// bool isDoubleSuperEffective(); ????
	// bool isNotVeryEffective(); ????
	// bool isDoubleNotVeryEffective; ????
	*/
};