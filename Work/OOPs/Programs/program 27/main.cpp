// Program to illustrate the concept of dynamic memory management using new and delete.
// Program number 27

#include <iostream>
using namespace std;

int main() {
  cout << "--- Memory Management Using NEW & DELETE ---" << endl;

  int* ptr = new int;
  *ptr = 42;
  cout << "\nDynamic Memory: " << *ptr << endl;
  cout << "Memory Address: " << ptr << endl;
  delete ptr;
  cout << "Memory has been freed" << endl;
  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;

}
