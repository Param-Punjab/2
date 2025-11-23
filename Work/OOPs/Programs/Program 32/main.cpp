// Program to overload binary addition operator
#include <iostream>
using namespace std;

class Add {
  int a;

public:
  Add(int x = 0) {
    a = x;
  }

  Add operator + (const Add &obj) {
    Add result;
    result.a = a + obj.a;
    return result;
  }

  void display() const {
    cout << "Value: " << a << endl;
  }
};

int main() {
  cout << "--- Overload Binary Addition ---\n" << endl;
  Add obj1(10);
  Add obj2(25);

  Add obj3 = obj1 + obj2;

  cout << "First object ";
  obj1.display();

  cout << "Second object ";
  obj2.display();

  cout << "After addition ";
  obj3.display();

  cout << "\nProgram Writer Info" << endl
       << "Name: Param Matharoo" << endl
       << "URN: 2435110" << endl
       << "Section: D1" << endl;
  return 0;
}
