// Tic-Tac-Toe game
// 
// A console Tic-Tac-Toe game with original rules.
// Two manual players are allowed to make a
// selection from the positions available on the
// constantly updated display. Both players 
// have to enter a number between 1 and 3 for 
// the row and column of choice. If the position
// is already taken, the user will be prompted
// to enter a different row and column. The Modular
// Programming Technique has been used and so this
// program requires the following files:
//  - main.cpp			- main file
//  - functions.h
//  - functions.cpp		- contains most functions
//  - graphics.h
//  - graphics.cpp		- contains final display functions
// 
// Compiler: Microsoft Visual Studio Express 2012
// OS: Windows 7
// 
// Written by: Ronald Rihoo
// 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "functions.h"

using namespace std;


int main()
{
	// boolean variable to decide which player's turn it is
	bool turn = 0; // 0 for player one, 1 for player two

	// other variables for game state verification
	bool state = 0;
	int winner = 0;
	int graphics = 0;

	// row and column variables
	const int rows = 3;
	const int cols = 3;
	int r = 0;
	int c = 0;
	char mark = ' ';

	// two dimensional array
	char board[rows][cols] = { {' ', ' ', ' '},
							   {' ', ' ', ' '},
							   {' ', ' ', ' '}};

	// Show title and instructions
	state = welcomeMenu();

	while (state == 1)
	{
		if (r > 0 && c > 0)
		{
			board[r-1][c-1] = mark;
		}

		state = checkState(board, rows, winner, graphics);

		if (graphics == 0)
		{
			displayBoard(board, rows);
		}
		else if (graphics != 0)
		{
			finalDisplay(board, rows, graphics);
		}


		if (state == 1)
		{
			turn = turnPrompt(board, rows, turn, r, c, mark);
		}

	}

	if (state == 0)
	{
	
		if (winner == 1)
		{
			cout << "\nPlayer 1 is the winner!\n";
		}
		else if (winner == 2)
		{
			cout << "\nPlayer 2 is the winner!\n";
		}
		else if (winner == 3)
		{
			cout << "\nDraw.\n";
		}

		cout << "\n\nGame Over.\n" << endl;
	}

	system("pause");
	return 0;
}