/*  InClassStuff.cpp || Nick Hofmann 6/23/2020
	nickhofmann1989@hotmail.com | nohofmann@dmacc.edu

	GROUP PROJECT:
	Nick Hofmann
	Austin Sommars
	Sam Goode

	This program will demonstrate the use of structs.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	struct Player
	{
		string name;
		double batting_average;
		int home_runs;
		double RBI;
		int runs_scored;
		int stolen_bases;
		float salary;
		string current_team;
	};
	// Initializing Player variables
	Player player1, player2, player3;

	player1.name = "Nick Hofmann";
	player1.batting_average = 12.3;
	player1.home_runs = 20;
	player1.RBI = .300;
	player1.runs_scored = 12;
	player1.stolen_bases = 2;
	player1.salary = 50000;
	player1.current_team = "Toledo Baseballs";

	player2 = { "Austin Sommars", 14, 100, .500, 25, 4, 60000, "Iowa Cubs" };
	player3 = { "Sam Goode", 154, 1010, .558, 12, 8, 100000, "Baseball Dudes" };

	// Player 1 Stats
	cout << "Player 1 Name: " << player1.name << endl;
	cout << "Player 1 Batting Average: " << player1.batting_average << endl;
	cout << "Player 1 Home Runs: " << player1.home_runs << endl;
	cout << "Player 1 RBI: " << player1.RBI << endl;
	cout << "Player 1 Runs Scored: " << player1.runs_scored << endl;
	cout << "Player 1 Stolen Bases: " << player1.stolen_bases << endl;
	cout << "Player 1 Salary: " << player1.salary << endl;
	cout << "Player 1 Team: " << player1.current_team << "\n\n";

	// Player 2 Stats
	cout << "Player 2 Name: " << player2.name << endl;
	cout << "Player 2 Batting Average: " << player2.batting_average << endl;
	cout << "Player 2 Home Runs: " << player2.home_runs << endl;
	cout << "Player 2 RBI: " << player2.RBI << endl;
	cout << "Player 2 Runs Scored: " << player2.runs_scored << endl;
	cout << "Player 2 Stolen Bases: " << player2.stolen_bases << endl;
	cout << "Player 2 Salary: " << player2.salary << endl;
	cout << "Player 2 Team: " << player2.current_team << "\n\n";

	// Player 3 Stats
	cout << "Player 3 Name: " << player3.name << endl;
	cout << "Player 3 Batting Average: " << player3.batting_average << endl;
	cout << "Player 3 Home Runs: " << player3.home_runs << endl;
	cout << "Player 3 RBI: " << player3.RBI << endl;
	cout << "Player 3 Runs Scored: " << player3.runs_scored << endl;
	cout << "Player 3 Stolen Bases: " << player3.stolen_bases << endl;
	cout << "Player 3 Salary: " << player3.salary << endl;
	cout << "Player 3 Team: " << player3.current_team << endl;

	return 0;
} // End of main method.