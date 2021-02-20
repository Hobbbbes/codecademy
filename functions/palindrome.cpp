#include <iostream>
#include <vector>

// Define is_palindrome() here:
/* So I definitely overengineered this one on my first try, I utilized 2 vectors and three loops,
one loop would push all characters of the text into the first vector (L1), the second would
push all of the characters in reverse order to the second vector (L2), then the third loop would
go through and compare each character of both vectors, if they were the same, return true, else return
false. Obviously, I can't say return true for every character and it needed to be the whole word, so after
blanking out, I compared my code to the solution and realized how overtly complicated I made such a simple
task, and changed it accordingly. */

bool is_palindrome(std::string text){

std::string temp = "";

for(int i = text.size() - 1; i >= 0; i--) {
  temp += text[i];
}

if(temp == text) {
  return true;
} else {
  return false;
}

}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
