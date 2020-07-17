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
	string attackMoveOne;
	string attackMoveTwo;
	string attackMoveThree;
	string attackMoveFour;
	// MAYBE USE STRUCTS FOR CONSTRUCTING EACH MOVE SINCE IT WILL NEED A STRING
	// NAME, ELEMENTAL TYPE, ETC. ????
public:
	Pokemon(string, int, int, int, string, string);  // CONSTRUCTOR
	Pokemon(string, int, int, int, string, string, string, string, string, string);  // CONSTRUCTOR W/ MOVES
	~Pokemon();                                      // DESTRUCTOR
	// MUTATORS
	void setPokemonName(string);
	void setPokemonLevel(int);
	void setPokemonHitPoints(int);
	void setPokemonSpeed(int);
	void setElementalTypeOne(string);
	void setElementalTypeTwo(string);
	void setAttackMoveOne(string);
	void setAttackMoveTwo(string);
	void setAttackMoveThree(string);
	void setAttackMoveFour(string);
	// ACCESSORS
	string getPokemonName() const;
	int getPokemonLevel() const;
	int getPokemonHitPoints() const; //	THIS FUNCTION MIGHT NOT BE ABLE TO BE A CONSTANT
	int getPokemonSpeed() const;
	string getElementalTypeOne() const;
	string getElementalTypeTwo() const;
	string getAttackMoveOne() const;
	string getAttackMoveTwo() const;
	string getAttackMoveThree() const;
	string getAttackMoveFour() const;

	// MEMBER FUNCTIONS
	//virtual string determineTypeAdvantage(); // NOT SURE WHAT THE RETURN TYPE SHOULD BE YET...STRING?
	void friendlyPokemonFaint();  // Determines when/if your Pokemon faints         // MOVE TO MAIN .CPP FILE PROBABLY
	void opposingPokemonFaint();  // Determines when/if the opposing Pokemon faints // MOVE TO MAIN .CPP FILE PROBABLY
	int takeDamage(int);
	/*
	int decreaseHitPoints();
	int increaseHitPoints(); // THIS IS JUST IN CASE A MOVE ALSO HEALS THE POKEMON USING IT (E.G. MEGA DRAIN)
	int useAttackMove();
	// bool isSuperEffective(); ????
	// bool isDoubleSuperEffective(); ????
	// bool isNotVeryEffective(); ????
	// bool isDoubleNotVeryEffective; ????
	*/
};