#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<char> square = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int turns = 0;

void gameInitialize() {
 
std::cout << "This is the board layout: \n\n";
 
std::cout << "        -        -         \n";
std::cout << "   1    -   2    -    3    \n";
std::cout << "        -        -         \n";
std::cout << "---------------------------\n";
std::cout << "        -        -         \n";
std::cout << "   4    -    5   -    6    \n";
std::cout << "        -        -         \n";
std::cout << "---------------------------\n";
std::cout << "        -        -         \n";
std::cout << "   7    -    8   -    9    \n";
std::cout << "        -        -         \n";
 
std::cout << "Select the square you'd like by inputting the square number.\n";
 
}
 
 
 
 
void gameBoard(char input, int nSquare) { 
 
switch(nSquare) {
  case 1:
    if(square[0] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[0] = input;
       turns++;
    }
    break;
 
  case 2:
    if(square[1] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[1] = input;
       turns++;
    }
    break;
 
  case 3:
    if(square[2] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[2] = input;
       turns++;
    }
    break;
 
  case 4:
    if(square[3] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[3] = input;
       turns++;
    }
    break;
 
  case 5:
    if(square[4] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[4] = input;
       turns++;
    }
    break;
 
  case 6:
    if(square[5] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[5] = input;
       turns++;
    }
    break;
 
  case 7:
    if(square[6] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[6] = input;
       turns++;
    }
    break;
 
  case 8:
    if(square[7] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[7] = input;
       turns++;
    }
    break;
 
  case 9:
    if(square[8] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[8] = input;
       turns++;
    }
    break;
 
  default:
    std::cout << "Invalid input, moving to next players turn.\n";
    break;
}
 
 
 
std::cout << "        -        -         \n";
std::cout << "   " << square[0] << "    -    " << square[1] << "   -     " << square[2] << "   \n";
std::cout << "        -        -         \n";
std::cout << "---------------------------\n";
std::cout << "        -        -         \n";
std::cout << "   " << square[3] << "    -   " << square[4] << "    -     " << square[5] << "   \n";
std::cout << "        -        -         \n";
std::cout << "---------------------------\n";
std::cout << "        -        -         \n";
std::cout << "   " << square[6] << "    -    " << square[7] << "   -    " << square[8] << "    \n";
std::cout << "        -        -         \n";
 
 
}

int isOver() {

	if(square[0] == 'X' && square[1] == 'X' && square[2] == 'X') {
		return 1;
	} else if (square[3] == 'X' && square[4] == 'X' && square[5] == 'X') {
	
		return 1;
	} else if (square[6] == 'X' && square[7] == 'X' && square[8] == 'X') {
		return 1;
	} else if (square[0] == 'X' && square[3] == 'X' && square[6] == 'X') {
		return 1;
	} else if (square[1] == 'X' && square[4] =='X' && square[7] == 'X') {
		return 1;
	} else if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X') {
		return 1;
	} else if (square[0] == 'X' && square[4] == 'X' && square[8] == 'X') {
		return 1;
	} else if (square[2] == 'X' && square[4] == 'X' && square[6] == 'X') {
		return 1;
	} else if (square[0] == 'O' && square[1] == 'O' && square[2] == 'O') {
		return 2;
	} else if (square[3] == 'O' && square[4] == 'O' && square[5] == 'O') {
		return 2;
	} else if (square[6] == 'O' && square[7] == 'O' && square[8] == 'O') {
		return 2;
	} else if (square[0] == 'O' && square[3] == 'O' && square[6] == 'O') {
		return 2;
	} else if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O') {
		return 2;
	} else if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O') {
		return 2;
	} else if (square[0] == 'O' && square[4] == 'O' && square[8] == 'O') {
		return 2;
	} else if (square[2] == 'O' && square[4] == 'O' && square[6] == 'O') {
		return 2;
	} else {
		return 0;
	}


}

int checkTurns(){
	return turns;
}