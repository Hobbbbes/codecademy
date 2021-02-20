#include <iostream>

// Define needs_water() here:
// So, I learned you're not supposed to use switch() with booleans when I made this, kept it for documentation anyway

std::string needs_water(int days, bool is_succulent){

switch(is_succulent){
  case true:
    if(days <= 12) {
      std::string v = "Don't water the plant!\n";
      return v;
    } else if(days >= 13) {
      std::string v = "Go ahead and give the plant a little water.\n";
      return v;
    } else {
      std::string v = "Don't water the plant!\n";
      return v;
    }
    break;
  case false:
    if(days > 3) {
      std::string v = "Time to water the plant.\n";
      return v;
    }
    break;
  default:
    return NULL;
}

}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
