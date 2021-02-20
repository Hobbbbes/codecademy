#include <iostream>
#include <cmath>

// Define tenth_power() here:

int tenth_power(int num){
  int powered;
  powered = pow(num, 10);
  return powered;
}


int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
