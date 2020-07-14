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
}

////////////////////////////////
////    CLASS DESTRUCTOR    ////
////////////////////////////////
Pokemon::~Pokemon()
{  //	I'M NOT SURE IF I HAVE TO ACTUALLY PUT ANY VALUES IN HERE
}

////////////////////////
////    MUTATORS    ////
////////////////////////
void Pokemon::setPokemonName(string pokeName)
{ pokemonName = pokeName; }

void Pokemon::setPokemonLevel(int pokeLVL)
{ pokemonLevel = pokeLVL; }

void Pokemon::setPokemonHitPoints(int pokeHP)
{ pokemonHitPoints = pokeHP; }

void Pokemon::setPokemonSpeed(int pokeSpeed)
{ pokemonSpeed = pokeSpeed; }

void Pokemon::setElementalTypeOne(string typeOne)
{ elementalTypeOne = typeOne; }

void Pokemon::setElementalTypeTwo(string typeTwo)
{ elementalTypeTwo = typeTwo; }

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

//////////////////////////////////
////     MEMBER FUNCTIONS     ////
//////////////////////////////////

string Pokemon::determineTypeAdvantage()
{
	/* ALL POKEMON ELEMENTAL TYPES
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
	*/

	return "This is the outcome returned by determineTypeAdvantage()";
}

int Pokemon::takeDamage(int attackStrength)  // I THINK THIS WOULD HAVE TO TAKE A PARAMETER FOR AN ATTACK MOVES POWER
{
	int attackPower = attackStrength;

	pokemonHitPoints -= attackPower;
	cout << "\n" << pokemonName << "'s current HP: " << pokemonHitPoints;

	return pokemonHitPoints;
}
/*
void determineAttackOrder(Pokemon allyPokemon, Pokemon opposingPokemon)
{
	if (allyPokemon.getPokemonSpeed() > opposingPokemon.getPokemonSpeed())
	{
		cout << "\n" << allyPokemon.getPokemonName() << " is faster than " << opposingPokemon.getPokemonName();
	}
	else if (opposingPokemon.getPokemonSpeed() > allyPokemon.getPokemonSpeed())
	{
		cout << "\n" << opposingPokemon.getPokemonName() << " is faster than " << allyPokemon.getPokemonName();
	}
	else if (allyPokemon.getPokemonSpeed() == opposingPokemon.getPokemonSpeed())
	{
		cout << "\n" << opposingPokemon.getPokemonName() << " has the same speed as " << allyPokemon.getPokemonName();
	}
}
*/
void Pokemon::friendlyPokemonFaint()
{
	cout << "\n" << pokemonName << " has fainted.\n";
}

void Pokemon::opposingPokemonFaint()
{
	cout << "\nThe opposing " << pokemonName << " has fainted.";
}