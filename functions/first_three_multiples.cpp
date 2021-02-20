#include <iostream>
#include <vector>

// Define first_three_multiples() here:
// I made this fancier than was necessary

std::vector<int> first_three_multiples(int num) {
  std::vector<int> temp = {};
  for(int i = 1; i <= 3; i++) {
    int itemp = num * i;
    temp.push_back(itemp);

  }
  return temp;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
