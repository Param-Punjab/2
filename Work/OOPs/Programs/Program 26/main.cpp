#include <iostream>
using namespace std;

class A {
  public:
    void display() {
      cout << "HELLO WORLD" << endl;
    }
};

class B: virtual public A {};
class C: virtual public A {};
class D: public B, public C {};

int main() {
  cout << "--- VIRTUAL BASE CLASS ---" << endl;
  D d1;
  d1.display();

  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
