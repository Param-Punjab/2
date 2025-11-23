// Program to illustrate the concept of hierarchical inheritance
#include <iostream> 
using namespace std;

class animal {
  public:
    void eat() {
      cout << "EATING....!" << endl;
    }  
};

class dog: public animal {
  public:
    void bark() {
      cout << "BARKING....!" << endl;
    } 
};

class cat: public animal {
  public:
    void meow() {
      cout << "MEWING....!" << endl;
    }
};

int main() {
  cout << "--- HIERARCHICAL INHERITANCE ---" << endl;
  cout << "Animal --> Dog" << endl;
  dog d1;
  d1.eat();
  d1.bark();

  cout << endl;

  cout << "Animal --> Cat" << endl;
  cat c1;
  c1.eat();
  c1.meow();

  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl; 
  return 0;
}
