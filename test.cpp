#include <iostream>
#include <string>

class Person {
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void introduce() const {
        std::cout << "Hi, I'm " << name 
                  << " and I'm " << age << " years old.\n";
    }
};

int main() {
    Person p("Alice", 25);
    p.introduce();
    return 0;
}
