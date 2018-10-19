/* github link to project repository: https://github.com/knguyen2/INFO450GUESS.git

	Author: Kim Nguyen
	Assignment: 02
	Date: Tuesday, October 8, 2018
	Class: INFO 450 - FALL 2018
	Instructor: Michele Kelo

	REQUIREMENT:

		*** Write a Program that builds an 8x8 board game with 5 pieces of hidden gold and 1 hidden BOMB,
		*** The user gets 5 chances (guesses) to find the gold,  earning a point for each found Gold
		*** After each guess, the user is informed if they found Gold or not and how many guesses they have left.
		*** If the user finds the BOMB before finding all the gold, the game is over. LOSER! No more guesses.
		*** The game starts with presenting a game board with the contents hidden
		*** The game allows the user to guess 5 times, by entering an x-coordinate and an y-coordinate for each guess

		At the end of the game,
		*** The player is presented with the number of Points earned  (gold that was found)
		*** The player is presented with the game board with the Contents showing  “G” = Gold, “F” = Found Gold, “B” = Bomb
		*** The player is asked if they want to play again.
		*** If the player selects to play again, games starts over by presenting the hidden board.
		*** The game will repeat for as long as the player wants to play
		*** The game must use a 2-D array as the Game Board
		*** The program must use at least 2 functions for the game (can be more!)
			*** To initialize the game board with Gold and Bomb
			*** To present the game board to the user
		*** The board 2-D array should be declared in the main() function and passed to the initialize and show functions
		*** The program should use const variables for the game board size
		*** The game should use the rand() function to randomly set the gold and bomb at different x,y positions in the array for each game played
			(Note:  srand( time(NULL));  can be used to seed the rand function);
		*** The user should be allowed to continue to play games until they decide to quit.

*/

#include <iostream>
#include <time.h> 
#include <iomanip>
using namespace std;

//  Declaring const variables for the game board size, max number of guesses, max number of Gold, and max number of Bomb
const int ROW = 8;
const int COL = 8;
const int MAXGUESS = 5;
const int MAXGOLD = 5;
const int MAXBOMB = 1;

//  Function Declaration
void hiddenBoard(char finalBoard[ROW][COL]);





// Initialize a hidden (?'s) board and display instructions to the player
void hiddenBoard(char finalBoard[ROW][COL])
{
	cout << "\n\n\t\t    * * * * * * * * * * * * * * * " << endl;
	cout << "\t\t    *                           * " << endl;
	cout << "\t\t    *   Let's Find Some Gold!   * " << endl;
	cout << "\t\t    *                           * " << endl;
	cout << "\t\t    *  You're given 5 Guesses.  * " << endl;
	cout << "\t\t    *   5 Pieces of Gold (G),   * " << endl;
	cout << "\t\t    *  and 1 Hidden Bomb (B)    * " << endl;
	cout << "\t\t    *                           * " << endl;
	cout << "\t\t    *   Test Your Luck Now!     * " << endl;
	cout << "\t\t    *                           * " << endl;
	cout << "\t\t    * * * * * * * * * * * * * * * " << endl;


	int row;
	int col;
	cout << "\n\n\n\t   ";

	//Assigning column lables/ header from 1-8
	for (col = 0; col < COL; col++)
	{
		cout << setw(5) << col + 1;
	}
	cout << endl;
	cout << "\t  - - - - - - - - - - - - - - - - - - - - - - -" << endl;

	//Assigning rows lables from 1-8 and columnn data 
	for (row = 0; row < ROW; row++)
	{
		cout << setw(5) << "\t" << row + 1;
		cout << " | ";

		for (col = 0; col < COL; col++)
		{
			cout << setw(5) << " ? ";
		}
		cout << setw(5) << " | ";
		cout << endl;
	}
	cout << "\t  - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << endl;
}






int main()
{
	
	// Functions Call 
	char showFinalBoard[ROW][COL];

	hiddenBoard(showFinalBoard);
	

	system("pause");
	return 0;
}