// Program to illustrate the concept of multilevel inharitance
#include <iostream>
using namespace std;

class first {
  public:
    string name = "PARAM MATHAROO";
};

class second {
  public:
    int age = 19; 
};

class third: public first, public second {
  public:
    void display() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
    }
};

int main() {
  cout << "-- MULTIPLE INHARITANCE --" << endl;
  third a1;
  a1.display();
  cout << "\nProgram Writer Info";
  cout << "\nName: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
