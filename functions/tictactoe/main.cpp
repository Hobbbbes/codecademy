#include <iostream>
#include <vector>
#include "funcs.hpp"
 
int main() {
char choice = 'X', choice2 = 'O';
int nSquare, whoseTurn = 0, lesTurns = 0;
bool isGameOver = false;
 
std::cout << "Welcome to Tic Tac Toe!\n";
std::cout << "Player One is X by default.\n\n";

lesTurns = checkTurns();
 
gameInitialize();
 
while(!isGameOver && lesTurns < 9) {
 
  switch(whoseTurn) {
 
    case 0:
      std::cin >> nSquare;
      gameBoard(choice, nSquare);
      whoseTurn++;
      break;
 
    case 1:
      std::cin >> nSquare;
      gameBoard(choice2, nSquare);
      whoseTurn--;
      break;
 
    default:
      return 0;
      break;
  }

int check = isOver();

switch(check){
	case 1:
		isGameOver = true;
		std::cout << "\nGame over! X won!\n";
		break;
		
	case 2:
		isGameOver = true;
		std::cout << "\nGame over! O won!\n";
		break;
		
	default:
		if(!isGameOver && lesTurns == 8){
			isGameOver = true;
			std::cout << "\nGame over! Tie!\n";
		}
		break;
}

} 

 
}
