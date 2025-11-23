#include <iostream>
using namespace std;

class A {
  public:
    void display() {
      cout << "Display function called from class A" << endl;
    }
};

class B{
  public:
    void display() {
      cout << "Display function called from class B" << endl;
    }
};

class C: public A, public B {};

int main() {
  cout << "--- AMBIGUITY IN SINGLE INHERITANCE ---" << endl;
  C c1;
  // c1.display(); ambiguity will encountered
  c1.A::display();
  c1.B::display();

  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
