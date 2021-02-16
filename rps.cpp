#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
int comp = rand() % 3 + 1; // Random seed gen + value <= 3 while !0 

int user=0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) :fist:\n";
std::cout << "2) :raised_hand:\n";
std::cout << "3) :v:\n";
 
std::cout << "shoot! ";
std::cin >> user;

// We can remove ties from being apart of each possible outcome by checking to see if it'll be a tie to begin with, and if so, executing our code
if(user == comp) { 
  std::cout << "Tie.\n";
} else {
  switch(user) { // Instead of creating an if/else if/else tree for the value of our user's input and the possible values, we can just use a switch statement
   case 1:
    if(comp == 2) { // Basic use if If/Else If statements as essential logic
      std::cout << "Paper beats rock! You lose.\n";
    } else if(comp == 3) {
      std::cout << "Rock beats scissors! You win.\n";
    }
    break;
   case 2:
    if(comp == 1) {
      std::cout << "Paper beats rock! You win.\n";
    } else if(comp == 3) {
      std::cout << "Scissors beats paper! You lose.\n";
    }
    break;
   case 3:
    if(comp == 1) {
      std::cout << "Rock beats scissors! You lose.\n";
    } else if(comp == 2) {
      std::cout << "Scissors beats paper! You win.\n";
    }
    break;
   default: // Zero clue why the fuck you'd put anything that isn't a number as input, you dumbass
    std::cout << "Invalid input.\n";
    break;
  }
}

// Just code to make sure I didn't fuck up, will output the values of comp && user so I can manually compare them to ensure accuracy
std::cout << comp << "\n";
std::cout << user << "\n\n";
}
