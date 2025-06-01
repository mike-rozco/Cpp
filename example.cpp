#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // New method to update age
    void haveBirthday() {
        age++;
        std::cout << "Happy Birthday! " << name << " is now " << age << " years old." << std::endl;
    }
};

int main() {
    Person person("John", 25);
    person.display();
    person.haveBirthday();
    person.display();
    return 0;
} 