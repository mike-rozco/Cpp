#include <iostream>
#include "profile.hpp"



Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
    
  }

// Returns a formatted string with the profile's information.
std::string Profile::view_profile() {

  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies:\n";


  if (hobbies.empty()) {
    hobby_string += "None listed\n";
  } else {
    for (std::string hobby : hobbies) {

      hobby_string += " - " + hobby + "\n";
    }
  }

  return bio + "\n" + hobby_string;
  
}

void Profile::add_hobby(const std::string& new_hobby) {
  hobbies.push_back(new_hobby);
}
