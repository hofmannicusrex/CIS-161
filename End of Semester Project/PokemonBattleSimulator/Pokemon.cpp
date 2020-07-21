#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////
////    CLASS CONSTRUCTOR     ////
//////////////////////////////////

Pokemon::Pokemon(string pokeName, int pokeLVL, int pokeHP, int pokeSpeed, string typeOne, string typeTwo)
{  // This will be used to create all of the Pokemon in my game.
	pokemonName = pokeName;
	pokemonLevel = pokeLVL;
	pokemonHitPoints = pokeHP;
	pokemonSpeed = pokeSpeed;
	elementalTypeOne = typeOne;
	elementalTypeTwo = typeTwo;
}  // THIS ONE IS PROBABLY USELESS NOW SINCE I'LL BE TRYING TO USE THE CONSTRUCTOR BELOW ONLY


Pokemon::Pokemon(string pokeName, int pokeLVL, int pokeHP, int pokeSpeed, string typeOne, string typeTwo,
				 string attackOne, string attackTwo, string attackThree, string attackFour)
{  // This will be used to create all of the Pokemon in my game.
	pokemonName = pokeName;
	pokemonLevel = pokeLVL;
	pokemonHitPoints = pokeHP;
	pokemonSpeed = pokeSpeed;
	elementalTypeOne = typeOne;
	elementalTypeTwo = typeTwo;
	attackMoveOne = attackOne;
	attackMoveTwo = attackTwo;
	attackMoveThree = attackThree;
	attackMoveFour = attackFour;
}

////////////////////////////////
////    CLASS DESTRUCTOR    ////
////////////////////////////////
Pokemon::~Pokemon()
{
}

////////////////////////
////    MUTATORS    ////
////////////////////////
void Pokemon::setPokemonName(string pokeName)
{ this->pokemonName = pokeName; }

void Pokemon::setPokemonLevel(int pokeLVL)
{ this->pokemonLevel = pokeLVL; }

void Pokemon::setPokemonHitPoints(int pokeHP)
{ this->pokemonHitPoints = pokeHP; }

void Pokemon::setPokemonSpeed(int pokeSpeed)
{ this->pokemonSpeed = pokeSpeed; }

void Pokemon::setElementalTypeOne(string typeOne)
{ this->elementalTypeOne = typeOne; }

void Pokemon::setElementalTypeTwo(string typeTwo)
{ this->elementalTypeTwo = typeTwo; }

void Pokemon::setAttackMoveOne(string attackOne)
{ this->attackMoveOne = attackOne; }

void Pokemon::setAttackMoveTwo(string attackTwo)
{ this->attackMoveTwo = attackTwo; }

void Pokemon::setAttackMoveThree(string attackThree)
{ this->attackMoveThree = attackThree; }

void Pokemon::setAttackMoveFour(string attackFour)
{ this->attackMoveFour = attackFour; }

/////////////////////////
////    ACCESSORS    ////
/////////////////////////
string Pokemon::getPokemonName() const
{ return pokemonName; }

int Pokemon::getPokemonLevel() const
{ return pokemonLevel; }

int Pokemon::getPokemonHitPoints() const
{ return pokemonHitPoints; }

int Pokemon::getPokemonSpeed() const
{ return pokemonSpeed; }

string Pokemon::getElementalTypeOne() const
{ return elementalTypeOne; }

string Pokemon::getElementalTypeTwo() const
{ return elementalTypeTwo; }

string Pokemon::getAttackMoveOne() const
{ return attackMoveOne; }

string Pokemon::getAttackMoveTwo() const
{ return attackMoveTwo; }

string Pokemon::getAttackMoveThree() const
{ return attackMoveThree; }

string Pokemon::getAttackMoveFour() const
{ return attackMoveFour; }

//////////////////////////////////
////     MEMBER FUNCTIONS     ////
//////////////////////////////////

/*  //	I DON'T THINK I NEED THIS TO BE A 'POKEMON' MEMBER FUNCTION...MOVED IT TO MAIN .CPP FILE
string Pokemon::determineTypeAdvantage()
{
	 ALL POKEMON ELEMENTAL TYPES
	fire
	grass
	ground
	electric
	water
	flying
	fighting
	psychic
	normal
	ghost
	poison
	bug
	rock
	ice
	dragon

	return "This is the outcome returned by determineTypeAdvantage()";
}
*/

int Pokemon::takeDamage(int attackStrength)  // I THINK THIS WOULD HAVE TO TAKE A PARAMETER FOR AN ATTACK MOVES POWER
{
	int attackPower = attackStrength;  // The power of the attack move being used.

	pokemonHitPoints -= attackPower;
	//cout << "\n" << pokemonName << "'s current HP: " << pokemonHitPoints;

	return pokemonHitPoints;
}

void Pokemon::friendlyPokemonFaint()
{
	cout << "\n" << pokemonName << " has fainted.\n";
}

void Pokemon::opposingPokemonFaint()
{
	cout << "\nThe opposing " << pokemonName << " has fainted.";
}