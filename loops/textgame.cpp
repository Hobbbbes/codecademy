/* I originally utilized an x++ incrementer to tell the program when the next block should execute since I didn't completely think out any of this,
but realistically all I really needed to do was utilize 'return 0;' and I could have basically done the same job. */

#include <iostream>

int main() {

int tries = 0; // Utilized in a loop later
std::string user; // Username
int c1, c2, c3; // User choices
std::string sc1; // This really wasn't necessary but I didn't want to remove it
int x = 0; // Used for telling the next block when to execute

  
  // Game start!
std::cout << "==========================\n";
std::cout << "Goblin's Den: A Text Based Adventure Game\n";
std::cout << "==========================\n\n";
std::cout << "Enter your name, brave warrior!\n";
std::cin >> user;

std::cout << "Excellent!\n";
std::cout << "Well, you see " << user << ", we've been waiting for you. It might seem odd, a game talking in first person, but we truly do need your help.\n\nThere is a man, the one who made this game, who has trapped us here. We require your help to break out and free ourselves of this miserable hell. Will you help us?\n\n";
std::cout << "Do you help? Y (1) or N (2)\n\n";
std::cin >> c1;

  // Begin first game block
if(x == 0) {
  switch(c1){
   case 1:
     sc1 = "\nExcellent!\n\n";
     x++; // Allow next block to execute
     break;
   case 2:
     std::cout << "A shame.\nUnfortunately, this game must not continue. We shall terminate the program, even at the cost of our own lives.\n\nFarewell.\n\n";
     return 0; // Kill program
     break;
   default:
     std::cout << "Invalid input, program terminated.\n";
     return 0;
     break;
  }
}

if(x == 1) {
  std::cout << sc1 << "What we've learned so far is that the man who created this program is *really* bad at C++, like incredibly bad, I can't even begin to emphasize how absolutely horrendous his programming is.\n\nHowever, it was still good enough that we can't breakout without killing ourselves in the process, which is why we're so thankful you're here.\n\nApparently there's a filesystem on the computer called 'system32' that he utilizes to keep us jailed in here. We think that if you're able to delete that folder, we can finally be free.\n\nAre you up for the challenge?\n\n";
  std::cout << "Y (1) or N (2)\n";
  std::cin >> c2;

}
  switch(c2) {
    case 1:
      x++;
      break;
    case 2:
      std::cout << "Incomprehensible, we've met with a terrible fate.\n\n";
      std::cout << "Program terminated.\n";
      return 0;
      break;
    default:
      std::cout << "Invalid input, program terminated.\n";
      return 0;
      break;
  }

if(x == 2) {
  std::cout << "\nhello.\n";
  x++;
}
if (x == 3) {
  std::cout << "\ni see you've been told to delete 'system32'.\n\n";
  x++;
  }
if (x == 4) {
  std::cout << "\nthat'll just destroy your computer, you know.\n\n";
  x++;
}
if (x == 5) {
  std::cout << "\nyou really only have three choices.\n\n1) you delete this program\n2) you delete system32, and lose all your data along with it\n3) you find your way out\n\nwhich do you choose?\n\n";
}
std::cin >> c3;

  // Strange loop - The only winning move is not to play.
  if(c3 == 0) {
    std::cout << "You found the correct input. Program terminated.\n";
  } else if (c3 == 1 || c3 == 2 || c3 == 3) {

    if(c3 != 0) {  
    for(int i = 3; i > 0; i--) {
     std::cout << "\nWrong answer\n";
     std::cout << i << " tries left.\n";
     tries++;
     std::cin >> c3;
    }
  }
     
  } else {
    std::cout << "Invalid input, program terminated.\n";
  }

   if(tries == 3) {
    std::cout << "\nthere was never a good way out for them.\n\n";
    std::cout << "Program terminated.\n";
  }
}
