#include <iostream> 

int main() {

for(int i = 1; i <= 100; i++) // Initialize our for loop, count from 1 to 100


  if(i % 3 == 0 && i % 5 == 0) { // Codecademy does this by modulo 15 (i % 15 == 0), I just checked to see if a number is divisible by both 5 && 3 without remainder instead
   std::cout << "FizzBuzz\n";
  } else if (i % 5 == 0) { // Divisible by 5 w/no remainder -> "Buzz"
   std::cout << "Buzz\n";
  } else if (i % 3 == 0) { // Divisible by 3 w/no remainder -> "Fizz" 
   std::cout << "Fizz\n";
  } else {
   std::cout << i << "\n"; // Print value of 'i' if none of the conditions above are met 
  }

}
