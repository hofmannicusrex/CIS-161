/*  PokemonBattleSimulator.cpp || Nick Hofmann 7/1/2020
    nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

    Last Updated: 7/21/2020

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
    
    struct attackMove
    {
        string attackMoveName;
        int attackMoveStrength;
        string attackMoveElementalType;
    };
    
    // ATTACK MOVE "DATABASE"
    attackMove razorLeaf =         {"Razor Leaf", 55, grass};
    attackMove vineWhip =          {"Vine Whip", 35, grass};
    attackMove bodySlam =          {"Body Slam", 85, normal};
    attackMove cut =               {"Cut", 50, normal};
    attackMove tackle =            { "Tackle", 35, normal };
    attackMove solarBeam =         { "Solar Beam", 120, grass };
    attackMove megaDrain =         { "Mege Drain", 40, grass };
    attackMove slash =             { "Slash", 70, normal };
    attackMove flamethrower =      { "Flamethrower", 95, fire };
    attackMove ember =             { "Ember", 40, fire };
    attackMove seismicToss =       { "Seimsic Toss", 20, fighting };
    attackMove dragonRage =        { "Dragon Rage", 40, dragon };
    attackMove swift =             { "Swift", 60, normal };
    attackMove strength =          { "Strength", 80, normal };
    attackMove bite =              { "Bite", 60, normal };
    attackMove waterGun =          { "Water Gun", 40, water };
    attackMove bubble =            { "Bubble", 20, water };
    attackMove iceBeam =           { "Ice Beam", 95, ice };
    attackMove hydroPump =         { "Hydro Pump", 120, water };
    attackMove surf =              { "Surf", 95, water };
    attackMove megaKick =          { "Mega Kick", 120, normal };
    // ATTACK MOVE "DATABASE"
    
    // POKEMON "DATABASE"         |||| CAN I PUT THESE ALL IN AN ARRAY TO BE USED FOR RANDOMIZATION???
    //                           "NAME"      LVL     HP  SPD  Type1  Type2     Attack1       Attack2
    Pokemon bulbasaur =     { "Bulbasaur", MAX_LVL, 293, 188, grass, poison, razorLeaf.attackMoveName, vineWhip.attackMoveName, bodySlam.attackMoveName, cut.attackMoveName };
    Pokemon ivysaur =       { "Ivysaur", MAX_LVL, 323, 218, grass, poison, megaDrain.attackMoveName, tackle.attackMoveName, razorLeaf.attackMoveName, vineWhip.attackMoveName };
    Pokemon venusaur =      { "Venusaur", MAX_LVL, 363, 258, grass, poison, vineWhip.attackMoveName, solarBeam.attackMoveName, bodySlam.attackMoveName, cut.attackMoveName };
    Pokemon charmander =    { "Charmander", MAX_LVL, 281, 228, fire, emptyType, flamethrower.attackMoveName, slash.attackMoveName, ember.attackMoveName, swift.attackMoveName };
    Pokemon charmeleon =    { "Charmeleon", MAX_LVL, 319, 258, fire, emptyType, dragonRage.attackMoveName, flamethrower.attackMoveName, ember.attackMoveName, slash.attackMoveName };
    Pokemon charizard =     { "Charizard", MAX_LVL, 359, 298, fire, flying, seismicToss.attackMoveName, strength.attackMoveName, flamethrower.attackMoveName, dragonRage.attackMoveName };
    Pokemon squirtle =      { "Squirtle", MAX_LVL, 291, 184, water, emptyType, bubble.attackMoveName, waterGun.attackMoveName, bite.attackMoveName, iceBeam.attackMoveName };
    Pokemon wartortle =     { "Wartortle", MAX_LVL, 321, 214, water, emptyType, iceBeam.attackMoveName, bite.attackMoveName, surf.attackMoveName, waterGun.attackMoveName };
    Pokemon blastoise =     { "Blastoise", MAX_LVL, 361, 254, water, emptyType, megaKick.attackMoveName, strength.attackMoveName, surf.attackMoveName, hydroPump.attackMoveName };
    /*
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

    // ATTACK MOVE "DATABASE"

    /* ======================================================================================================
       ======================================================================================================
        
        DESIGN AND IMPLEMENT A STRUCT FOR ATTACK MOVES AND THEN CONSTRUCT A SET POOL OF ATTACK MOVES, LIKE
        YOU DID FOR ALL 151 POKEMON.

        struct attackMove
        {
            string attackMoveName;
            int attackMoveStrength;
            string attackMoveElementalType;
        };

        ======================================================================================================
        ======================================================================================================
    */
    
    /*
    determineAttackOrder(bulbasaur, mew);
    determineAttackOrder(dragonite, kabutops);
    determineAttackOrder(allyPokemon, enemyPokemon);
    */
    
    Pokemon allyPokemon = bulbasaur;
    Pokemon enemyPokemon = venusaur;
    //Pokemon enemyPokemon = charizard;

    const int MAX_ALLY_POKEMON_HP = allyPokemon.getPokemonHitPoints();
    const int MAX_ENEMY_POKEMON_HP = enemyPokemon.getPokemonHitPoints();

    do
    {
        // LOCAL VARIABLE DECLARATIONS
        battleTurnCounter++;  // COUNTS THE NUMBER OF TURNS THAT HAVE TAKEN PLACE
        int userAttackChoice;  // The user's attack move selection for their Pokemon.
        int allyAttackDamage;  // The power of your ally Pokemon's attack move.
        int enemyAttackDamage;  // The power of the enemy Pokemon's attack move.

        // BATTLE MENU
        cout << "\n   OPPONENT POKEMON";
        cout << "\n\t" << enemyPokemon.getPokemonName()
             << "\n\tLVL: " << enemyPokemon.getPokemonLevel()
             << "\n\tHP: " << enemyPokemon.getPokemonHitPoints() << "/" << MAX_ENEMY_POKEMON_HP << "\n";

        cout << "\n\t\t   YOUR POKEMON";
        cout << "\n\t\t\t" << allyPokemon.getPokemonName()
             << "\n\t\t\tLVL: " << allyPokemon.getPokemonLevel()
             << "\n\t\t\tHP: " << allyPokemon.getPokemonHitPoints() << "/" << MAX_ALLY_POKEMON_HP << "\n";
        cout << setw(46) << setfill('-');

        cout << "\n\n  0" << setw(23) << setfill('-') << "0";
        cout << "\n    1)  " << allyPokemon.getAttackMoveOne();
        cout << "\n    2)  " << allyPokemon.getAttackMoveTwo();
        cout << "\n    3)  " << allyPokemon.getAttackMoveThree();
        cout << "\n    4)  " << allyPokemon.getAttackMoveFour();
        cout << "\n  0" << setw(23) << setfill('-') << "0";

        do
        {
            cout << "\n\tChoose your attack move: ";
            cin >> userAttackChoice;
            //static_cast<int>(userAttackChoice); // BELIEVE THIS IS UNNECESSARY
        } while ((userAttackChoice != 1) && (userAttackChoice != 2) && (userAttackChoice != 3) && (userAttackChoice != 4)); // MAYBE ALTER???

        switch (userAttackChoice)
        {
        case 1: allyAttackDamage = razorLeaf.attackMoveStrength;  // Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used "
                 << allyPokemon.getAttackMoveOne() << "!\n";

            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took "
                 << allyAttackDamage << " damage.\n\n\n";
            system("pause");  // Pausing here so that the user has a summary of their Pokemon's turn.
            break;
        case 2: allyAttackDamage = vineWhip.attackMoveStrength;// Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used "
                 << allyPokemon.getAttackMoveTwo() << "!\n";

            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took "
                 << allyAttackDamage << " damage.\n\n\n";
            system("pause");  // Pausing here so that the user has a summary of their Pokemon's turn.
            break;
        case 3: allyAttackDamage = bodySlam.attackMoveStrength;// Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used "
                 << allyPokemon.getAttackMoveTwo() << "!\n";

            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took "
                 << allyAttackDamage << " damage.\n\n\n";
            system("pause");  // Pausing here so that the user has a summary of their Pokemon's turn.
            break;
        case 4: allyAttackDamage = cut.attackMoveStrength;// Setting attack move damage.
            cout << "\n" << allyPokemon.getPokemonName() << " used "
                 << allyPokemon.getAttackMoveTwo() << "!\n";

            cout << "\nThe opposing " << enemyPokemon.getPokemonName() << " took "
                 << allyAttackDamage << " damage.\n\n\n";
            system("pause");  // Pausing here so that the user has a summary of their Pokemon's turn.
            break;
        default:
            break;
        }  // END OF SWITCH STATEMENT THAT CONTROLS USER ATTACK CHOICE

        enemyAttackDamage = cut.attackMoveStrength;// Setting attack move damage.
        cout << "\n\nThe opposing " << enemyPokemon.getPokemonName() << " used "
            << enemyPokemon.getAttackMoveFour() << "!\n";

        cout << "\nYour " << allyPokemon.getPokemonName() << " took "
            << enemyAttackDamage << " damage.\n\n";

        allyPokemon.takeDamage(enemyAttackDamage);  // Ally Pokemon taking damage.

        enemyPokemon.takeDamage(allyAttackDamage);  // Enemy Pokemon taking damage.
        cout << endl;

        system("pause");  // Pausing here so that the user has a summary of the enemy's turn.
        system("cls");  // Clearing the console of output.

        if ((allyPokemon.getPokemonHitPoints() < 0) || (enemyPokemon.getPokemonHitPoints() < 0))
        {
            //cout << "\n\nBREAKING OUT OF DO WHILE LOOP\n\n";  // MESSAGE USED FOR CONFIRMING PROGRAM FUNCTIONALITY
            break;
        }

    } while ((allyPokemon.getPokemonHitPoints() > 0) || (enemyPokemon.getPokemonHitPoints() > 0));
    //=======================================================================================
    //============ END OF WHILE LOOP THAT CONTROLS BATTLE AND/OR MOVE SELECTION  ============
    //=======================================================================================

    // This is the if statement to determine which Pokemon will faint first.
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