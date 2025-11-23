#include <iostream>
using namespace std;

class A {
  public:
  void showA() {
    cout << "constructor A" << endl;
  }
};

class B: public A {
  public:
  void showB() {
    cout << "constructor B" << endl;
  }
};

class C {
  public:
  void showC() {
    cout << "constructor C" << endl;
  }
};

class D: public B, public C {
  public:
  void showD() {
    cout << "constructor D" << endl;
  }
};

int main() {
  cout << "--- HYBRID INHARITANCE ---" << endl;
  D d1;
  d1.showA();
  d1.showB();
  d1.showC();
  d1.showD();

  cout << endl << "Program Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
