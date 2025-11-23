// Program to show pointer arithmetic operators
// Program number 29
#include <iostream>
using namespace std;

int main() {
  cout << "--- POINTER ARITHMATIC [++/--] ---" << endl;
  int a = 5;
  int* b = &a;
  cout << "\nOriginal Value: " << *b << endl;
  cout << "Increment with 2: " << (*b + 2) << endl;
  cout << "Decrement with 2: " << (*b - 2) << endl;
  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
