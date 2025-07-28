#include <iostream>
#include "profile.hpp"


int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");


  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing at the rec");
  std::cout << sam.view_profile();


}
