// graphics.cpp
// 
// For each winning condition (rows, columns, diagonals),
// this file will provide a unique final display to show
// the condition achieved (even though it will be obvious).
//
// There will be an integer variable in the main.cpp file
// that will be assigned a number when functions.cpp checks
// the state of the game; based on the winning condition that
// has been met.
//
// The variable will be assigned a specific number for each
// unique winning condition, as follows:
//
// int graphics = ...
//
// 0 for draw
// 1 for row 1
// 2 for row 2
// 3 for row 3
// 4 for col 1
// 5 for col 2
// 6 for col 3
// 7 for left diagonal
// 8 for right diagonal
// 
// note: did not use 2D array just for ease of coding.
// note2: original display function from functions.cpp 
//		  is used as template and modified as needed.
//        
// Compiled using: Microsoft Visual Studio Express 2012
// OS: Windows 7
//
// Author: Ronald Rihoo
// 


#include "stdafx.h"
#include "graphics.h"
#include "functions.h"
#include <iostream>
#include <iomanip>

using namespace std;

// display the final state of the game
// Win on Row 1
void win_Row1(char board[][3], int rows)
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
			 << setw(28) << "ROW " << i + 1;
			 if (i == 0)
			 {
				cout << " -";
			 }
			 else if (i != 0)
			 {
				cout << "  ";
			 }
		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					if (i == 0)
					{
						cout << "-|-";
					}
					else if (i != 0)
					{
						cout << " | ";
					}
				}

				if (j == (rows - 1))
				{
					if (i == 0)
					{
						cout << "-";
					}
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

// display the final state of the game
// Win on Row 2
void win_Row2(char board[][3], int rows)
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
			 << setw(28) << "ROW " << i + 1;
			 if (i == 1)
			 {
				cout << " -";
			 }
			 else if (i != 1)
			 {
				cout << "  ";
			 }
		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					if (i == 1)
					{
						cout << "-|-";
					}
					else if (i != 1)
					{
						cout << " | ";
					}
				}

				if (j == (rows - 1))
				{
					if (i == 1)
					{
						cout << "-";
					}
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

// display the final state of the game
// Win on Row 3
void win_Row3(char board[][3], int rows)
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
			 << setw(28) << "ROW " << i + 1;
			 if (i == 2)
			 {
				cout << " -";
			 }
			 else if (i != 2)
			 {
				cout << "  ";
			 }
		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					if (i == 2)
					{
						cout << "-|-";
					}
					else if (i != 2)
					{
						cout << " | ";
					}
				}

				if (j == (rows - 1))
				{
					if (i == 2)
					{
						cout << "-";
					}
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

// Win on column 1
void win_Col1(char board[][3], int rows)
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
		cout << setw(36) << "| |  " << " | "
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
		<< setw(36) << "| |  " << " | "
		<< endl;

		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}

// Win on column 2
void win_Col2(char board[][3], int rows)
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
		cout << setw(36) << " | |" << " | "
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
		<< setw(36) << " | |" << " | "
		<< endl;

		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}

// Win on column 3
void win_Col3(char board[][3], int rows)
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
		cout << setw(36) << " |  " << " | |"
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
		<< setw(36) << " |  " << " | |"
		<< endl;

		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}

// Win on left diagonal ("\" shape)
void win_Diag1(char board[][3], int rows)
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
		if (i == 0)
		{
			cout << setw(36) << "\\  |  " << " | "
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}
		else if (i == 1)
		{
			cout << setw(36) << " |\\ " << " | "
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}
		else if (i == 2)
		{
			cout << setw(36) << "|  " << " |\\ "
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}

		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					cout << " | ";
				}
		}

		if (i == 0)
		{
			cout << endl
			     << setw(36) << " \\|  " << " | "
				 << endl;
		}
		else if (i == 1)
		{
			cout << endl
			     << setw(36) << " |  " << "\\| "
				 << endl;
		}
		else if (i == 2)
		{
			cout << endl
			     << setw(36) << " |  " << " |  \\"
				 << endl;
		}


		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}

// Win on right diagonal ("/" shape)
void win_Diag2(char board[][3], int rows)
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
		if (i == 0)
		{
			cout << setw(36) << "  |  " << " |  /"
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}
		else if (i == 1)
		{
			cout << setw(36) << "   |  " << "/| "
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}
		else if (i == 2)
		{
			cout << setw(36) << " /|  " << " | "
				 << endl
				 << setw(28) << "ROW " << i + 1
				 << "  ";
		}

		for (int j = 0; j < rows; j++)
		{
				cout << board[i][j] ;

				if (j < (rows - 1 ))
				{
					cout << " | ";
				}
		}

		if (i == 0)
		{
			cout << endl
			     << setw(36) << " |  " << " |/ "
				 << endl;
		}
		else if (i == 1)
		{
			cout << endl
			     << setw(36) << "  |/ " << " | "
				 << endl;
		}
		else if (i == 2)
		{
			cout << endl
			     << setw(36) << "/  |  " << " |  "
				 << endl;
		}


		if (i < (rows - 1))
		{
			cout << setw(41) << "-----------"
				 << endl;
		}
	}

}
