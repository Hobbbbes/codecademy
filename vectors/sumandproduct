/* Add the sums of all even numbers and the product of
all odd numbers in a given vector */

#include <iostream>
#include <vector>

int main() {

std::vector<int> list = {2, 4, 3, 6, 1, 9}; // Vector decleeration and initialization
int even = 0, odd = 1; // Originally this confused me, but because odds are multiplied, our value can't be 0 or we get nothing

for(int i = 0; i < list.size(); i++) { // i = 0, count up to the size of all total elements in the vector
  if(list[i] % 2 == 0) { // Divisible by 2 with no remainder --> 'even' is element 'i' of list + the value of 'even' (basically add to self)
    even += list[i];
  } else if(list[i] % 2 != 0) { // If divisble by 2 with remainder --> 'odd' is itself multiplied by element 'i' (multiply to self)
    odd = odd * list[i];
  } else {
    return 0; // Just here 
  }
  
}
// Print results
std::cout << even << "\n";
std::cout << odd << "\n";
}
