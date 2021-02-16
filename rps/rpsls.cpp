#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
int comp = rand() % 5 + 1; // Random seed gen + computer value is <= 5 while !0 (which is why we have the + 1)

int user=0;

 // Essentially just RPS, but with two added moves (so total, 5 * 4 possible win/lose possibilities, 5 * 5 possiblities including ties)
 
std::cout << "====================\n";
std::cout << "rock paper scissors lizard spock!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) Lizard\n";
std::cout << "5) Spock\n";
 
std::cout << "shoot! \n";
std::cin >> user;

 /* Same as before, we begin by checking the value immediately between user and the random seed, if they're the same,
 we go straight to tie and don't run anything else */
 
if(user == comp) {
  std::cout << "Tie.\n";
} else {
  switch(user) { // Same thing, we just use a switch statement instead of if-tree just for simplicitiy sake 
   case 1:
    switch(comp) { // Because our possible outcomes is increased by 2 for each option we have, I decided to also move from if/else if to switch statements for our cases
      case 2:
        std::cout << "Paper beats rock! You lose.\n";
        break;
      case 3:
        std::cout << "Rock beats scissors! You win.\n";
        break;
      case 4:
        std::cout << "Rock crushes lizard! You win.\n";
        break;
      case 5:
        std::cout << "Spock vaporizes rock! You lose.\n";
        break;
      default:
        return 0;
        break;
    }
    break;
   case 2:
    switch(comp) {
      case 1:
        std::cout << "Paper beats rock! You win.\n";
        break;
      case 3:
        std::cout << "Scissors beats paper! You lose.\n";
        break;
      case 4:
        std::cout << "Lizard eats paper! You lose.\n";
        break;
      case 5:
        std::cout << "Paper disprove Spock! You win.\n";
        break;
      default:
        return 0;
        break;
    }
    break;
   case 3:
    switch(comp) {
      case 1:
        std::cout << "Rock beat scissors! You lose.\n";
        break;
      case 2:
        std::cout << "Scissors beats paper! You win.\n";
        break;
      case 4:
        std::cout << "Scissors decapitates lizard! You win.\n";
        break;
      case 5:
        std::cout << "Spock smashes scissors! You lose.\n";
        break;
      default:
        return 0;
        break;
    }
      break;
    case 4:
      switch(comp) {
        case 1:
          std::cout << "Rock crushes lizard! You lose.\n";
          break;
        case 2:
          std::cout << "Lizard eats paper! You win.\n";
          break;
        case 3:
          std::cout << "Scissors decapitates lizard! You lose.\n";
          break;
        case 5:
          std::cout << "Lizard poisons Spock! You win.\n";
          break;
        default:
          return 0;
          break;
      }
      break;
    case 5:
      switch(comp) {
        case 1:
          std::cout << "Spock vaporizes rock! You win.\n";
          break;
        case 2:
          std::cout << "Paper disproves Spock! You lose.\n";
          break;
        case 3:
          std::cout << "Spock smashes scissors! You win.\n";
          break;
        case 4:
          std::cout << "Lizard poisons Spock! You lose.\n";
          break;
        default:
          return 0;
          break;
      }
   default:
    std::cout << "Invalid input.\n";
    break;
  }
}

 // Manual check
std::cout << comp << "\n";
std::cout << user << "\n\n";
}
