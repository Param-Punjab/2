#include <iostream>
using namespace std;

class Person {
  public:
    string name = "Param";
    int age = 19;
    Person() {
      cout << "Person: " << name << ", Age: " << age << endl;
    }
};

int main() {
  cout << "Default Constructor" << endl;
  Person p1;
  cout << "\nProgram Writer Info" << endl
       << "Name: Paramveer Singh" << endl
       << "Roll Number: 2415209" << endl
       << "Section: D1" << endl;
  return 0;
}
