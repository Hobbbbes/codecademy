#include <iostream>
#include <cstdlib> // I meant to use this library for a computer vs. human but ended up making it human vs. human
#include <vector>

std::vector<char> square = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // Where we store our inputs 
int turns = 0; // We return this via a function called checkTurns();

void gameInitialize() { // Draw our board, show the player which numbers are correlated to which tile to place their character
 
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
 
 

// The switches can probably be their own function, but it doesn't really make too grand of a difference 
void gameBoard(char input, int nSquare) { // Make sure a tile with a character can't be overwritten, skip players turn if so, otherwise write to our tile (our vector element)
 //So I figured out how to make this entire switch function significantly shorter
	
if(square[nSquare - 1] != ' '){ // -1 since vectors start at 0
	std::cout << "\nUser attempted to overwrite used square, skipping turn.\n"; // Skip if overwrite attempt
} else if (square[nSquare - 1] == ' ') { // If vector is empty, do the following
	square[nSquare - 1] = input; // Write the input to the square
	turns++; // Turn is counted
} else {
	std::cout << "Invalid input, moving to next players turn.\n"; // If anything else, skip
}
	
/* switch(nSquare) {
  case 1:
    if(square[0] != ' ') {
       std::cout << "\nUser attempted to overwrite used square, skipping turn.\n";
    } else {
       square[0] = input;
       turns++; // Count this as a valid turn if not attempting to overwrite
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
 
*/ 
 // Project our current vector
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

/* I'm sure I could have figured out an more clean, easier way to do this, but it's just all possible winning combinations, checking for
both combinations regarding character 'X' or regarding character 'O' */

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

// Just returns the value of our turns variable to be used in the main program
int checkTurns(){
	return turns;
} 
