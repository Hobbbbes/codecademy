#include <iostream>
#include <vector>
#include "funcs.hpp"
 
int main() {
char choice = 'X', choice2 = 'O';
int nSquare, whoseTurn = 0, lesTurns = 0;
bool isGameOver = false;
 
std::cout << "Welcome to Tic Tac Toe!\n";
std::cout << "Player One is X by default.\n\n";
 
gameInitialize(); // Draws board and denotes squares by numeric value
 
while(!isGameOver && lesTurns < 9) { // A game can't be longer than 9 turns, so run while turns < 9
 
  switch(whoseTurn) { // This is how I got the program to tell if it should input X or O 
 
    case 0:
      std::cin >> nSquare;
      gameBoard(choice, nSquare); // First argument changes based off switch (e.g. our whoseTurn++/whoseTurn-- code), while nSquare is the user input for their character placement 
      whoseTurn++; // Move to 'O'
      break;
 
    case 1:
      std::cin >> nSquare;
      gameBoard(choice2, nSquare);
      whoseTurn--; // Move to 'X'
      break;
 
    default:
      return 0; // can't really do anything but i needed a default statement so
      break;
  }

int check = isOver(); // Check to see if the current character placements in the vector are a winning combination, return a given value depending on if 'X' or 'O'

switch(check){ // Based off our return value, do the following
	case 1:
		isGameOver = true;
		std::cout << "\nGame over! X won!\n";
		break;
		
	case 2:
		isGameOver = true;
		std::cout << "\nGame over! O won!\n";
		break;
		
	default:
		if(!isGameOver && lesTurns == 8){ // If we hit 9 (counting zero) turns and the game still isn't over, it's a tie
			isGameOver = true;
			std::cout << "\nGame over! Tie!\n";
		}
		break;
}

lesTurns = checkTurns(); // Update our turns for our while loop
} 

 
}
