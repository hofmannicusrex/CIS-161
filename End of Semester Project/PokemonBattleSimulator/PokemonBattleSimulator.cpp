/*  PokemonBattleSimulator.cpp || Nick Hofmann 7/12/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    Last Updated: 7/14/2020

    This program will simulate a Pokemon battle.

*/
#include "Pokemon.h"
#include <iostream>
#include <iomanip>
using namespace std;

void determineAttackOrder(Pokemon, Pokemon);
void determineTypeAdvantage(Pokemon, Pokemon);
//bool isBattleOver();  // MIGHT NOT BE NEEDED

int main()
{
    // VARIABLE DECLARATIONS
    const int MAX_LVL = 100;
    int userAttackChoice;
    int battleTurnCounter = 0;
    string normal =    "Normal";
    string fire =      "Fire";
    string water =     "Water";
    string electric =  "Electric";
    string grass =     "Grass";
    string ice =       "Ice";
    string fighting =  "Fighting";
    string poison =    "Poison";
    string ground =    "Ground";
    string flying =    "Flying";
    string psychic =   "Psychic";
    string bug =       "Bug";
    string rock =      "Rock";
    string ghost =     "Ghost";
    string dragon =    "Dragon";
    string emptyType = "NONE";

    /*
    // TESTING CREATING POKEMON OBJECTS IN AN ARRAY
    const Pokemon pokemonDatabase[3] = { 
                Pokemon("Bulbasaur", MAX_LVL, 293, 188, grass, poison, "Solar Beam", "Tackle"),
                Pokemon("Ivysaur", MAX_LVL, 323, 218, grass, poison),
                Pokemon("Venusaur", MAX_LVL, 363, 258, grass, poison)
                                         };
    */

    // POKEMON "DATABASE"         |||| CAN I PUT THESE ALL IN AN ARRAY TO BE USED FOR RANDOMIZATION???
    //                           "NAME"      LVL     HP  SPD  Type1  Type2     Attack1       Attack2
    Pokemon bulbasaur =     { "Bulbasaur", MAX_LVL, 293, 188, grass, poison, "Razor Leaf", "Vine Whip" };
    Pokemon ivysaur =       { "Ivysaur", MAX_LVL, 323, 218, grass, poison, "Razor Leaf", "Tackle" };
    Pokemon venusaur =      { "Venusaur", MAX_LVL, 363, 258, grass, poison, "Vine Whip", "Solar Beam" };
    /*
    Pokemon charmander =    { "Charmander", MAX_LVL, 281, 228, fire, emptyType };
    Pokemon charmeleon =    { "Charmeleon", MAX_LVL, 319, 258, fire, emptyType };
    Pokemon charizard =     { "Charizard", MAX_LVL, 359, 298, fire, flying };
    Pokemon squirtle =      { "Squirtle", MAX_LVL, 291, 184, water, emptyType };
    Pokemon wartortle =     { "Wartortle", MAX_LVL, 321, 214, water, emptyType };
    Pokemon blastoise =     { "Blastoise", MAX_LVL, 361, 254, water, emptyType };
    Pokemon caterpie =      { "Caterpie", MAX_LVL, 293, 188, bug, emptyType };
    Pokemon metapod =       { "Metapod", MAX_LVL, 303, 158, bug, emptyType };
    Pokemon butterfree =    { "Butterfree", MAX_LVL, 323, 238, bug, flying };
    Pokemon weedle =        { "Weedle", MAX_LVL, 283, 198, bug, poison };
    Pokemon kakuna =        { "Kakuna", MAX_LVL, 293, 168, bug, poison };
    Pokemon beedrill =      { "Beedrill", MAX_LVL, 333, 248, bug, poison };
    Pokemon pidgey =        { "Pidgey", MAX_LVL, 283, 210, normal, flying };
    Pokemon pidgeotto =     { "Pidgeotto", MAX_LVL, 329, 240, normal, flying };
    Pokemon pidgeot =       { "Pidgeot", MAX_LVL, 369, 280, normal, flying };
    Pokemon rattata =       { "Rattata", MAX_LVL, 263, 242, normal, emptyType };
    Pokemon raticate =      { "Raticate", MAX_LVL, 313, 292, normal, emptyType };
    Pokemon spearow =       { "Spearow", MAX_LVL, 283, 238, normal, flying };
    Pokemon fearow =        { "Fearow", MAX_LVL, 333, 298, normal, flying };
    Pokemon ekans =         { "Ekans", MAX_LVL, 273, 208, poison, emptyType };
    Pokemon arbok =         { "Arbok", MAX_LVL, 323, 258, poison, emptyType };
    Pokemon pikachu =       { "Pikachu", MAX_LVL, 273, 278, electric, emptyType };
    Pokemon raichu =        { "Raichu", MAX_LVL, 323, 298, electric, emptyType };
    Pokemon sandshrew =     { "Sandshrew", MAX_LVL, 303, 178, ground, emptyType };
    Pokemon sandslash =     { "Sandslash", MAX_LVL, 353, 228, ground, emptyType };
    Pokemon nidoranFemale = { "Nidoran - Female", MAX_LVL, 313, 180, poison, emptyType };
    Pokemon nidorina =      { "Nidorina", MAX_LVL, 343, 210, poison, emptyType };
    Pokemon nidoqueen =     { "Nidoqueen", MAX_LVL, 383, 250, poison, ground };
    Pokemon nidoranMale =   { "Nidoran - Male", MAX_LVL, 295, 198, poison, emptyType };
    Pokemon nidorino =      { "Nidorino", MAX_LVL, 325, 228, poison, emptyType };
    Pokemon nidoking =      { "Nidoking", MAX_LVL, 365, 268, poison, ground };
    Pokemon clefairy =      { "Clefairy", MAX_LVL, 343, 168, normal, emptyType };
    Pokemon clefable =      { "Clefable", MAX_LVL, 393, 218, normal, emptyType };
    Pokemon vulpix =        { "Vulpix", MAX_LVL, 279, 228, fire, emptyType };
    Pokemon ninetails =     { "Ninetails", MAX_LVL, 349, 298, fire, emptyType };
    Pokemon jigglypuff =    { "Jigglypuff", MAX_LVL, 433, 138, normal, emptyType };
    Pokemon wigglytuff =    { "Wigglytuff", MAX_LVL, 483, 188, normal, emptyType };
    Pokemon zubat =         { "Zubat", MAX_LVL, 283, 208, poison, flying };
    Pokemon golbat =        { "Golbat", MAX_LVL, 353, 278, poison, flying };
    Pokemon oddish =        { "Oddish", MAX_LVL, 293, 158, grass, poison };
    Pokemon gloom =         { "Gloom", MAX_LVL, 323, 178, grass, poison };
    Pokemon vileplume =     { "Vileplume", MAX_LVL, 353, 198, grass, poison };
    Pokemon paras =         { "Paras", MAX_LVL, 273, 148, bug, grass };
    Pokemon parasect =      { "Parasect", MAX_LVL, 323, 158, bug, grass };
    Pokemon venonat =       { "Venonat", MAX_LVL, 323, 188, bug, poison };
    Pokemon venomoth =      { "Venomoth", MAX_LVL, 343, 278, bug, poison };
    Pokemon diglett =       { "Diglett", MAX_LVL, 223, 288, ground, emptyType };
    Pokemon dugtrio =       { "Dugtrio", MAX_LVL, 273, 338, ground, emptyType };
    Pokemon meowth =        { "Meowth", MAX_LVL, 283, 278, normal, emptyType };
    Pokemon persian =       { "Persian", MAX_LVL, 303, 208, normal, emptyType };
    Pokemon psyduck =       { "Psyduck", MAX_LVL, 303, 208, water, emptyType };
    Pokemon golduck =       { "Golduck", MAX_LVL, 363, 268, water, emptyType };
    Pokemon mankey =        { "Mankey", MAX_LVL, 283, 238, fighting, emptyType };
    Pokemon primeape =      { "Primeape", MAX_LVL, 333, 288, fighting, emptyType };
    Pokemon growlithe =     { "Growlithe", MAX_LVL, 313, 218, fire, emptyType };
    Pokemon arcanine =      { "Arcanine", MAX_LVL, 383, 288, fire, emptyType };
    Pokemon poliwag =       { "Poliwag", MAX_LVL, 283, 278, water, emptyType };
    Pokemon poliwhirl =     { "Poliwhirl", MAX_LVL, 333, 278, water, emptyType };
    Pokemon poliwrath =     { "Poliwrath", MAX_LVL, 383, 238, water, fighting };
    Pokemon abra =          { "Abra", MAX_LVL, 253, 278, psychic, emptyType };
    Pokemon kadabra =       { "Kadabra", MAX_LVL, 283, 308, psychic, emptyType };
    Pokemon alakazam =      { "Alakazam", MAX_LVL, 313, 338, psychic, emptyType };
    Pokemon machop =        { "Machop", MAX_LVL, 343, 168, fighting, emptyType };
    Pokemon machoke =       { "Machoke", MAX_LVL, 363, 188, fighting, emptyType };
    Pokemon machamp =       { "Machamp", MAX_LVL, 383, 208, fighting, emptyType };
    Pokemon bellsprout =    { "Bellsprout", MAX_LVL, 303, 178, grass, poison };
    Pokemon weepinbell =    { "Vileplume", MAX_LVL, 333, 208, grass, poison };
    Pokemon victreebell =   { "Vileplume", MAX_LVL, 363, 238, grass, poison };
    Pokemon tentacool =     { "Tentacool", MAX_LVL, 283, 238, water, poison };
    Pokemon tentacruel =    { "Tentacruel", MAX_LVL, 363, 298, water, poison };
    Pokemon geodude =       { "Geodude", MAX_LVL, 283, 138, rock, ground };
    Pokemon graveler =      { "Graveler", MAX_LVL, 313, 168, rock, ground };
    Pokemon golem =         { "Golem", MAX_LVL, 363, 188, rock, ground };
    Pokemon ponyta =        { "Ponyta", MAX_LVL, 303, 278, fire, emptyType };
    Pokemon rapidash=       { "Rapidash", MAX_LVL, 333, 308, fire, emptyType };
    Pokemon slowpoke =      { "Slowpoke", MAX_LVL, 383, 128, water, psychic };
    Pokemon slowbro =       { "Slowbro", MAX_LVL, 393, 158, water, psychic };
    Pokemon magnemite =     { "Magnemite", MAX_LVL, 253, 188, electric, emptyType };
    Pokemon magneton =      { "Magneton", MAX_LVL, 303, 238, electric, emptyType };
    Pokemon farfetchd =     { "Farfetch'd", MAX_LVL, 307, 218, normal, flying };
    Pokemon doduo =         { "Doduo", MAX_LVL, 273, 248, normal, flying };
    Pokemon dodrio =        { "Dodrio", MAX_LVL, 273, 318, normal, flying };
    Pokemon seel =          { "Seel", MAX_LVL, 333, 188, water, emptyType };
    Pokemon dewgong =       { "Dewgong", MAX_LVL, 383, 238, water, ice };
    Pokemon grimer =        { "Grimer", MAX_LVL, 363, 148, poison, emptyType };
    Pokemon muk =           { "Muk", MAX_LVL, 413, 198, poison, emptyType };
    Pokemon shellder =      { "Shellder", MAX_LVL, 263, 178, water, emptyType };
    Pokemon cloyster =      { "Cloyster", MAX_LVL, 303, 238, water, ice };
    Pokemon gastly =        { "Gastly", MAX_LVL, 263, 258, ghost, poison };
    Pokemon haunter =       { "Haunter", MAX_LVL, 293, 288, ghost, poison };
    Pokemon gengar =        { "Gengar", MAX_LVL, 323, 318, ghost, poison };
    Pokemon onyx =          { "Onyx", MAX_LVL, 273, 238, rock, ground };
    Pokemon drowzee =       { "Drowzee", MAX_LVL, 323, 182, psychic, emptyType };
    Pokemon hypno =         { "Hypno", MAX_LVL, 373, 232, psychic, emptyType };
    Pokemon krabby =        { "Krabby", MAX_LVL, 263, 198, water, emptyType };
    Pokemon kingler =       { "Kingler", MAX_LVL, 313, 248, water, emptyType };
    Pokemon voltorb =       { "Voltorb", MAX_LVL, 283, 298, electric, emptyType };
    Pokemon electrode =     { "Electrode", MAX_LVL, 323, 378, electric, emptyType };
    Pokemon exeggcute =     { "Exeggcute", MAX_LVL, 323, 178, grass, psychic };
    Pokemon exeggutor =     { "Exeggutor", MAX_LVL, 393, 208, grass, psychic };
    Pokemon cubone =        { "Cubone", MAX_LVL, 303, 168, ground, emptyType };
    Pokemon marowak =       { "Marowak", MAX_LVL, 323, 188, ground, emptyType };
    Pokemon hitmonlee =     { "Hitmonlee", MAX_LVL, 303, 272, fighting, emptyType };
    Pokemon hitmonchan =    { "Hitmonchan", MAX_LVL, 303, 250, fighting, emptyType };
    Pokemon lickitung =     { "Lickitung", MAX_LVL, 383, 158, normal, emptyType };
    Pokemon koffing =       { "Koffing", MAX_LVL, 283, 168, poison, emptyType };
    Pokemon weezing =       { "Weezing", MAX_LVL, 333, 218, poison, emptyType };
    Pokemon rhyhorn =       { "Rhyhorn", MAX_LVL, 363, 148, ground, rock };
    Pokemon rhydon =        { "Rhydon", MAX_LVL, 413, 178, ground, rock };
    Pokemon chansey =       { "Chansey", MAX_LVL, 703, 198, normal, emptyType };
    Pokemon tangela =       { "Tangela", MAX_LVL, 333, 218, grass, emptyType };
    Pokemon kangaskhan =    { "Kangaskhan", MAX_LVL, 413, 278, normal, emptyType };
    Pokemon horsea =        { "Horsea", MAX_LVL, 263, 218, water, emptyType };
    Pokemon seadra =        { "Seadra", MAX_LVL, 313, 268, water, emptyType };
    Pokemon goldeen =       { "Goldeen", MAX_LVL, 293, 224, water, emptyType };
    Pokemon seaking =       { "Seaking", MAX_LVL, 363, 234, water, emptyType };
    Pokemon staryu =        { "Staryu", MAX_LVL, 263, 268, water, emptyType };
    Pokemon starmie =       { "Starmie", MAX_LVL, 323, 328, water, psychic };
    Pokemon mrMime =        { "Mr. Mime", MAX_LVL, 283, 278, psychic, emptyType };
    Pokemon scyther =       { "Scyther", MAX_LVL, 343, 308, bug, flying };
    Pokemon jynx =          { "Jynx", MAX_LVL, 333, 288, ice, psychic };
    Pokemon electabuzz =    { "Electabuzz", MAX_LVL, 333, 308, electric, emptyType };
    Pokemon magmar =        { "Magmar", MAX_LVL, 333, 284, fire, emptyType };
    Pokemon pinsir =        { "Pinsir", MAX_LVL, 333, 268, bug, emptyType };
    Pokemon tauros =        { "Tauros", MAX_LVL, 353, 318, normal, emptyType };
    Pokemon magikarp =      { "Magikarp", MAX_LVL, 243, 258, water, emptyType };
    Pokemon gyarados =      { "Gyarados", MAX_LVL, 393, 260, water, flying };
    Pokemon lapras =        { "Lapras", MAX_LVL, 463, 218, water, ice };
    Pokemon ditto =         { "Ditto", MAX_LVL, 299, 194, normal, emptyType };
    Pokemon eevee =         { "Eevee", MAX_LVL, 313, 208, normal, emptyType };
    Pokemon vaporeon =      { "Vaporeon", MAX_LVL, 463, 228, water, emptyType };
    Pokemon jolteon =       { "Jolteon", MAX_LVL, 333, 358, electric, emptyType };
    Pokemon flareon =       { "Flareon", MAX_LVL, 333, 228, fire, emptyType };
    Pokemon porygon =       { "Porygon", MAX_LVL, 333, 178, normal, emptyType };
    Pokemon omanyte =       { "Omanyte", MAX_LVL, 273, 168, rock, water };
    Pokemon omastar =       { "Omastar", MAX_LVL, 343, 208, rock, water };
    Pokemon kabuto =        { "Kabuto", MAX_LVL, 263, 208, rock, water };
    Pokemon kabutops =      { "Kabutops", MAX_LVL, 323, 258, rock, water };
    Pokemon aerodactyl =    { "Aerodactyl", MAX_LVL, 363, 358, rock, flying };
    Pokemon snorlax =       { "Snorlax", MAX_LVL, 523, 158, normal, emptyType };
    Pokemon articuno =      { "Articuno", MAX_LVL, 383, 268, ice, flying };
    Pokemon zapdos =        { "Zapdos", MAX_LVL, 383, 298, electric, flying };
    Pokemon moltres =       { "Moltres", MAX_LVL, 383, 278, fire, flying };
    Pokemon dratini =       { "Dratini", MAX_LVL, 285, 198, dragon, emptyType };
    Pokemon dragonair =     { "Dragonair", MAX_LVL, 325, 238, dragon, emptyType };
    Pokemon dragonite =     { "Dragonite", MAX_LVL, 385, 258, dragon, flying };
    Pokemon mewtwo =        { "Mewtwo", MAX_LVL, 415, 358, psychic, emptyType };
    Pokemon mew =           { "Mew", MAX_LVL, 403, 298, psychic, emptyType };
    // POKEMON "DATABASE"
    */
    // { "Bulbasaur", MAX_LVL, 293, 188, grass, poison }

    /*
    cout << bulbasaur.determineTypeAdvantage() << "\n\n";
    bulbasaur.friendlyPokemonFaint();
    mewtwo.opposingPokemonFaint();
    bulbasaur.takeDamage();
    bulbasaur.takeDamage();
    bulbasaur.takeDamage();
    bulbasaur.takeDamage();
    */

    // system("cls"); // CLEARS THE SCREEN OF TEXT
    
    /*
    determineAttackOrder(bulbasaur, mew);
    determineAttackOrder(dragonite, kabutops);
    determineAttackOrder(allyPokemon, enemyPokemon);
    */
    
    Pokemon allyPokemon = bulbasaur;
    Pokemon enemyPokemon = venusaur;

    cout << "BEGIN PROTOTYPE BATTLE:\n\n";

    do
    {
        battleTurnCounter++;  // COUNTS THE NUMBER OF TURNS THAT HAVE TAKEN PLACE
        int userAttackChoice;
        int attackDamage = 0;

        // THIS HAPPENS DURING EVERY ITERATION OF THE WHILE LOOP
        cout << "\n   YOUR POKEMON";
        cout << "\n\t" << allyPokemon.getPokemonName()
             << "\n\tLVL: " << allyPokemon.getPokemonLevel()
             << "\n\tHP: " << allyPokemon.getPokemonHitPoints() << "\n";

        cout << "\n\t\t   OPPONENT POKEMON";
        cout << "\n\t\t\t" << enemyPokemon.getPokemonName()
             << "\n\t\t\tLVL: " << enemyPokemon.getPokemonLevel()
             << "\n\t\t\tHP: " << enemyPokemon.getPokemonHitPoints() << "\n";

        cout << "\n  0-----------------------------------0";
        cout << "\n  | 1)          " << allyPokemon.getAttackMoveOne() << "            |";
        cout << "\n  | 2)          " << allyPokemon.getAttackMoveTwo() << "             |";
        //cout << "\n  | 3)         Medium Attack          |";
        //cout << "\n  | 4)       Ultimate Ability         |";
        cout << "\n  0-----------------------------------0";
        cout << "\n\tChoose your attack move: ";
        cin >> userAttackChoice;

        switch (userAttackChoice)
        {
        case 1: attackDamage = 55;  // Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used " << allyPokemon.getAttackMoveOne() << "!\n";
            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took " << attackDamage << " damage.\n\n";
            system("pause");
            break;
        case 2: attackDamage = 35;// Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used "
                 << allyPokemon.getAttackMoveTwo() << "!\n";
            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took " << attackDamage << " damage.\n\n";
            system("pause");
            break;
        case 3: //cout << "\tYou chose 'Medium Attack'";
            attackDamage = 34;
            break;
        case 4: //cout << "\tYou chose 'Ultimate Ability'";
            attackDamage = 71;
            break;
        default:
            break;
        }  // END OF SWITCH STATEMENT THAT CONTROLS USER ATTACK CHOICE

        cout << "\n\n    ";

        //allyPokemon.takeDamage(attackDamage);
        
        // THIS IS WHERE THE ENEMY POKEMON TAKES DAMAGE
        enemyPokemon.takeDamage(attackDamage);
        cout << endl;

        system("cls");

        if ((allyPokemon.getPokemonHitPoints() < 0) || (enemyPokemon.getPokemonHitPoints() < 0))
        {
            //cout << "\n\nBREAKING OUT OF DO WHILE LOOP\n\n"; // MESSAGE USED FOR CONFIRMING PROGRAM FUNCTIONALITY
            break;
        }

    } while ((allyPokemon.getPokemonHitPoints() > 0) || (enemyPokemon.getPokemonHitPoints() > 0));
    // END OF WHILE LOOP THAT CONTROLS BATTLE AND/OR MOVE SELECTION

    // This is an if statement to determine which Pokemon will faint first.
    if (allyPokemon.getPokemonHitPoints() > enemyPokemon.getPokemonHitPoints())
    {
        cout << "\n\n" << allyPokemon.getPokemonName() << " finished with more HP and is the winner!\n\n\n";
    }
    else if (enemyPokemon.getPokemonHitPoints() > allyPokemon.getPokemonHitPoints())
    {
        cout << "\n\n" << enemyPokemon.getPokemonName() << " finished with more HP and is the winner!\n\n\n";
    }
    else
    {
        cout << "\n\n" << allyPokemon.getPokemonName() << " and " << enemyPokemon.getPokemonName()
             << " finished with the same HP...it's a draw!\n\n\n";
    }

    /*
    cout << "\n" << allyPokemon.getPokemonName() << "\nLVL: " << allyPokemon.getPokemonLevel()
        << "\nHP: " << allyPokemon.getPokemonHitPoints() << "\n";
    cout << "\n" << enemyPokemon.getPokemonName() << "\nLVL: " << enemyPokemon.getPokemonLevel()
        << "\nHP: " << enemyPokemon.getPokemonHitPoints() << "\n";
    */

    //cout << "\n\n\nThe battle lasted " << battleTurnCounter << " turns.\n\n"; // TURN COUNTER

    return 0;
}  // End of main method.

/////////////////////////
////    FUNCTIONS    ////
/////////////////////////


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
    else
    {
        cout << "\n" << opposingPokemon.getPokemonName() << " has the same speed as " << allyPokemon.getPokemonName();
    }
}

void determineTypeAdvantage(Pokemon allyPokemon, Pokemon opposingPokemon)
{
    // WRITE LOGIC FOR COMPARING allyPokemon.getAttackMoveOneType - or something
}

void allyPokemonFaint()
{

}

void enemyPokemonFaint()
{

}

bool isBattleOver(Pokemon allyPokemon, Pokemon opposingPokemon)
{
    return true;
}