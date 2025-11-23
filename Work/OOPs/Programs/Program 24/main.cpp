// Program to illustrate the concept of ambiguity in single inheritance
#include <iostream>
using namespace std;

class A {
  public: 
    void display() {
      cout << "HELLO WORLD" << endl;
    }
};

class B: public A {
  public:
    void display() {
      cout << "I AM PARAM" << endl;
    }
};


int main() {
  B b1; 
  cout << "--- AMBIGUITY IN SINGLE INHERITANCE ---" << endl;
  b1.display();
  b1.A::display();

  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "URN: 2435110" << endl;
  cout << "Section: D1" << endl;
  return 0;
}
