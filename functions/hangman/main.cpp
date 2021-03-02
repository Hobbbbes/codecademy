#include <iostream>
#include <string>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy", answer = "__________"; // I plan on making this more dynamic so it'll pick a random assortment of words instead of a static one
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

greet(); // Void func, displays greet (I know, surprising)

while(answer != codeword && misses < 7){ // Where most our game logic is
  display_misses(misses); // Displays our misses, increments by 1 for each miss within our while loop
  display_status(answer, incorrect); /* Probably could have integrated misses and status honestly, 
                                      which I'll probably also do, but this tells you your correct and incorrect guesses */
  
  std::cout << "\nPlease enter your guess: \n";
  std::cin >> letter; // User input

  for(int i = 0; i < codeword.length(); i++) { // If (input) is the same as (codeword character at point i) -> set our answer's point on [i] to (input), set guess to true
    if(letter == codeword[i]) {
      answer[i] = letter;
      guess = true;
    }
  }

if(answer != codeword){ // I did this so that the game didn't print the if(guess) when the entire word was guessed
  if(guess) {
  
    std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    guess = false;
  
  } else {

    std::cout << "\nIncorrect! The beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++; // misses + 1 if we fail
  }
}
}

end_game(answer, codeword); // Void func to display results when either codeword is guessed or our while loop above terminates

}

