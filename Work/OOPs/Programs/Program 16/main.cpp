#include <iostream>
using namespace std;

class MyClass {
  public:
    int value;
    MyClass(int v) {value = v;}
    MyClass(const MyClass &obj) {
      cout << "Copy Constructor" << endl;
      value = obj.value;
    }
    void display() {cout << "Value: " << value << endl;}
};

int main() {
  MyClass obj1(10);
  MyClass obj2 = obj1;
  obj1.display();
  obj2.display();
  cout << "\nProgram Writer Info" << endl
       << "Name: Paramveer Singh" << endl
       << "Roll Number: 2415209" << endl
       << "Section: D1" << endl;
  return 0;
}
