#include <iostream>
#include <string>
#include "ufo_functions.hpp"

int main() {
std::string codeword = "codecademy", answer = "__________";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

greet();

while(answer != codeword && misses < 7){
  display_misses(misses);
  display_status(answer, incorrect);
  std::cout << "\nPlease enter your guess: \n";
  std::cin >> letter;

  for(int i = 0; i < codeword.length(); i++) {
    if(letter == codeword[i]) {
      answer[i] = letter;
      guess = true;
    }
  }

if(answer != codeword){
  if(guess) {
  
    std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    guess = false;
  
  } else {

    std::cout << "\nIncorrect! The beam pulls the person in further.\n";
    incorrect.push_back(letter);
    misses++;
  }
}
}

end_game(answer, codeword);

}

