/* I forgot how absolutely annoying programming can be if I don't
actively write notes to remind myself what's doing what (wow, what's new),
so this was more annoying than it should've been if I just, you know, took
five minutes to actually write anything down */

/* Fun fact - I only write comments when I upload to github */

#include <iostream>
#include <vector>
#include <string>

int main() {

std::string text = "turpentine and turtles"; // String we're anaylzing
std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}; // Vowels vector
std::vector<char> result; // Where we'll add our letters to after completely analyzing the string and creating our whaletext

for(int i = 0; i < text.size(); i++) { // Create a cycle through our string we want to analyze

  for (int x = 0; x < vowels.size(); x++) { // Create an inner loop that cycles through all our vowels

    
    /* So our if statement below is a bit blurry without proper explanation; essentially, we've created two loops -
    one cycles through every character within our input string, while the other cycles through every vowel within our 
    vector. Because our loops are nested, it goes as such; When a character is being input via our first loop, our second
    loop then takes action - it cycles through every vowel and compares it - when comparing, if the character we're on is
    equal to one of any of our vowels in our vector, we add it to our result vector, otherwise we don't do anything. So here's
    a TL;DR - Loop through every character in our input string, but for each character we're on, we loop through all our vowels
    to compare it to - if our input character is a match with any vowel within our vector, add it to the result vector */
    
    
    if(text[i] == vowels[x]) { 
    
      result.push_back(text[i]);

    }
  }

/* We look for two specific vowels, 'e' and 'u' within our input text - if it's a match, we add it to the result vector again,
this way we double them, and basically get what we know as our whaletext, or whale talk */

if(text[i] == 'e' || text[i] == 'u') {
  result.push_back(text[i]);
}
}

/* Because we read our results as characters, we also input them into a character vector;
in-order to read this out as a "string," we must loop through all elements in our vector
and call them out to our display */

for(int y = 0; y < result.size(); y++) {
  std::cout << result[y];
}
}
