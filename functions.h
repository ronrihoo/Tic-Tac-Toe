// functions.h
//
// header file to functions.cpp
//
// Compiler: Microsoft Visual Studio Express 2012
// OS: Windows 7
//
// written by: Ronald Rihoo
//

#ifndef functions_h
#define functions_h
#include <string>

using namespace std;

bool welcomeMenu();
void displayBoard(char[][3], int);
bool turnPrompt(char[][3], int, bool, int&, int&, char&);
bool emptySlot(char[][3], int, int, int, int, char&);
bool checkState(char[][3], int, int&, int&);
void finalDisplay(char[][3], int, int);


#endif