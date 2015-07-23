// functions.cpp
// 
// Includes most of the tic-tac-toe game functions.
// This file is responsible for the welcome screen and menu 
// selection to start the game; prompting the two different 
// plays and validating their selections; checking the state
// of the game (whether win/draw condition has been reached
// or not); and decides the final display (representation of
// win condition, included in graphics.cpp).
//        
// Compiled using: Microsoft Visual Studio Express 2012
// OS: Windows 7
//
// written by: Ronald Rihoo
// 


#include "stdafx.h"
#include "functions.h"
#include "graphics.h"
#include <iostream>
#include <iomanip>

using namespace std;


// Display title, instructions, and menu for game start
bool welcomeMenu()
{
	int selection = 0;

	cout << setw(41) << setfill('-') << "Tic Tac Toe" 
		 << setw(40) << setfill('-') << right << "-\n"
		 << setfill(' ')
		 << "Instructions: this is a manual two player game.\n"
		 << " - Player 1 will have the mark \"X\"\n"
		 << " - Player 2 will have the mark \"O\"\n\n"
		 << "Winning conditions:\n"
		 << " - Upon a player's mark having been placed in a whole row, column, or diagonal.\n\n"
		 << "Draw condition:\n"
		 << " - Upon all slots having been marked without the winning condition being met.\n\n"
		 << "How to play:\n"
		 << " - You may only enter a number between 1 and 3 for both rows and columns.\n\n"
		 << "Game Menu\n"
		 << "1 - start\n"
		 << "2 - exit\n\n"
		 << "Select: ";
	cin >> selection;

	while (selection != 1 && selection != 2)
	{
		cin.ignore();
		cout << "That selection is not valid, please try again.\n"
			 << "1 - start\n"
			 << "2 - quit\n";
		cin >> selection;
	}

	if (selection == 1)
	{
		return true;
	}
	else if (selection == 2)
	{
		return false;
	}

	cout << "\n\n\n";

	return false;
}

// display the current state of the game
void displayBoard(char board[][3], int rows)
{
	system("CLS");
	// Game Title
	cout << setw(41) << setfill('-') << "Tic Tac Toe" 
		 << setw(40) << setfill('-') << right << "-\n"
		 << setfill(' ')
		 << "\n";

	// Game display
	cout << setw(42) << "COL COL COL\n"
		 << setw(40) << " 1   2   3"
		 << endl;

	for (int i = 0; i < rows; i++)
	{
		cout << setw(36) << " |  " << " | "
			 << endl
			 << setw(28) << "ROW " << i + 1
		     << "  ";
		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					cout << " | ";
				}
		}
		cout << endl
		<< setw(36) << " |  " << " | "
		<< endl;

		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}

// decide which player's turn it is, then prompt and validate
// user input.
bool turnPrompt(char board[][3], int rows, bool turn, int &r, int &c, char &mark)
{
	bool temp = 0;
	bool empty = false;

	if (turn == 0)
	{
		while (empty == false)
		{
			cout << "\nPlayer 1" << endl;
			cout << "Row: ";
			cin >> r;

			while (r < 1 || r > 3)
			{
				displayBoard(board, rows);
				cin.ignore();
				cout << "\nYou have entered an invalid number.\n"
					 << "Please enter a number between 1-3.\n"
					 << "Row: ";
					 cin >> r;
			}
			cin.ignore();

			cout << "Col: ";
			cin >> c;

			while (c < 1 || c > 3)
			{
				displayBoard(board, rows);
				cin.ignore();
				cout << "\nYou have entered an invalid number.\n"
					 << "Please enter a number between 1-3.\n"
					 << "Row: " << r << "\n"
					 << "Col: ";
					 cin >> c;
			}

			cin.ignore();

			empty = emptySlot(board, rows, turn, r, c, mark);

			if (empty == true)
			{
				temp = 1;
			}
			else
			{
				displayBoard(board, rows);
				cout << "\nThat slot is taken, please try again.\n";
			}
		
		}
	}

	else if (turn == 1)
	{
		
		while (empty == false)
		{
			cout << "\nPlayer 2" << endl;
			cout << "Row: ";
			cin >> r;
			while (r < 1 || r > 3)
			{
				displayBoard(board, rows);
				cin.ignore();
				cout << "\nYou have entered an invalid number.\n"
					 << "Please enter a number between 1-3.\n"
					 << "Row: ";
					 cin >> r;
			}

			cin.ignore();
			cout << "Col: ";
			cin >> c;

			while (c < 1 || c > 3)
			{
				displayBoard(board, rows);
				cin.ignore();
				cout << "\nYou have entered an invalid number.\n"
					 << "Please enter a number between 1-3.\n"
					 << "Row: " << r << "\n"
					 << "Col: ";
					 cin >> c;
			}
			
			empty = emptySlot(board, rows, turn, r, c, mark);

			if (empty == true)
			{
				temp = 0;
			}
			else
			{
				displayBoard(board, rows);
				cout << "\nThat slot is taken, please try again.\n";
			}
			
			cin.ignore();
		}
	}

	return temp;
}

// checks to see if the selected slot/position is empty or not
bool emptySlot(char board[][3], int rows, int turn, int r, int c, char &mark)
{
	bool empty = false;

	if (turn == 0)
	{
		while (empty == false)
		{
			if(board[(r-1)][(c-1)] != 'X' && board[(r-1)][(c-1)] != 'O')
			{
				empty = true;
				mark = 'X';
				return true;
			}
			else
			{
				mark = ' ';
				empty = false;
				return false;
			}
		}
	}

	else if (turn == 1)
	{
		
		while (empty == false)
		{
			if(board[(r-1)][(c-1)] != 'X' && board[(r-1)][(c-1)] != 'O')
			{
				empty = true;
				mark = 'O';
				return true;
			}
			else
			{
				empty = false;
				mark = ' ';
				return false;
			}
			
		}
	}
		
	return false;
}

// checks to see if any of the winning conditions have been met,
// and if not, then it checks to see if the draw condition has been met.
bool checkState(char board[][3], int rows, int &winner, int &graphics)
{
	int xRowCount = 0;
	int oRowCount = 0;
	int xColCount = 0;
	int oColCount = 0;
	int xDiagOneCount = 0;
	int oDiagOneCount = 0;
	int xDiagTwoCount = 0;
	int oDiagTwoCount = 0;
	int usedSlots = 0;

	for (int i = 0; i < rows; i++)
	{

		/* 
		//	Check columns for both players
		*/
		for (int j = 0; j < rows; j++)
		{
			if (board[i][j] == 'X')
			{
				xRowCount++;
				usedSlots++;
			}
			if (board[i][j] == 'O')
			{
				oRowCount++;
				usedSlots++;
			}
		}

		// Did either player win with current row?
		if (xRowCount == 3)
		{
			winner = 1;

			if (i == 0)
			{
				graphics = 1;
			}

			if (i == 1)
			{
				graphics = 2;
			}

			if (i == 2)
			{
				graphics = 3;
			}

			return false;
		}
		else if (oRowCount == 3)
		{
			winner = 2;

			if (i == 0)
			{
				graphics = 1;
			}

			if (i == 1)
			{
				graphics = 2;
			}

			if (i == 2)
			{
				graphics = 3;
			}

			return false;
		}

		// ... If not, then clear counters to check next row
		else
		{
			xRowCount = 0;
			oRowCount = 0;
		}

		/* 
		//	Check columns for both players
		*/
		for (int j = 0; j < rows; j++)
		{
			if (board[j][i] == 'X')
			{
				xColCount++;
			}
			if (board[j][i] == 'O')
			{
				oColCount++;
			}
		}

		// Did either player win with current column?
		if (xColCount == 3)
		{
			winner = 1;

			if (i == 0)
			{
				graphics = 4;
			}

			if (i == 1)
			{
				graphics = 5;
			}

			if (i == 2)
			{
				graphics = 6;
			}

			return false;
		}
		else if (oColCount == 3)
		{
			winner = 2;

			if (i == 0)
			{
				graphics = 4;
			}

			if (i == 1)
			{
				graphics = 5;
			}

			if (i == 2)
			{
				graphics = 6;
			}

			return false;
		}

		// ... If not, then clear counters to check next column
		else
		{
			xColCount = 0;
			oColCount = 0;
		}


		/* 
		// Check diagonals for both players
		*/

		// Diagonal [1][1], [2][2], [3][3]
		if (board[i][i] == 'X')
		{
			xDiagOneCount++;
		}
		else if (board[i][i] == 'O')
		{
			oDiagOneCount++;
		}

		// Did either play win on this diagonal?
		if (xDiagOneCount == 3)
		{
			winner = 1;

			graphics = 7;

			return false;
		}
		else if (oDiagOneCount == 3)
		{
			winner = 2;

			graphics = 7;

			return false;
		}

		// Opposite Diagonal, [3][1], [2][2], [1][3]
		if (board[i][(rows - i) - 1] == 'X')
		{
			xDiagTwoCount++;
		}
		else if (board[i][(rows - i) - 1] == 'O')
		{
			oDiagTwoCount++;
		}

		// Did either play win on this diagonal?
		if (xDiagTwoCount == 3)
		{
			winner = 1;

			graphics = 8;

			return false;
		}
		else if (oDiagTwoCount == 3)
		{
			winner = 2;

			graphics = 8;

			return false;
		}

	}

	// Was there a tie?
	if (usedSlots == 9)
	{
		winner = 3;
		return false;
	}
	// ... If not, then continue game.
	else
	{
		return 1;
	}
}

// receives the decision for final display and calls for according
// final display from graphics.cpp
void finalDisplay(char board[][3], int rows, int graphics)
{
	if (graphics == 1)
	{
		win_Row1(board, rows);
	}

	if (graphics == 2)
	{
		win_Row2(board, rows);
	}

	if (graphics == 3)
	{
		win_Row3(board, rows);
	}

	if (graphics == 4)
	{
		win_Col1(board, rows);
	}

	if (graphics == 5)
	{
		win_Col2(board, rows);
	}

	if (graphics == 6)
	{
		win_Col3(board, rows);
	}

	if (graphics == 7)
	{
		win_Diag1(board, rows);
	}

	if (graphics == 8)
	{
		win_Diag2(board, rows);
	}
}