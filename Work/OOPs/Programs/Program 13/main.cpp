#include <iostream>
using namespace std;

class Box {
  private:
    int length;
  public:
    Box(int l): length(l) {}
    friend class Printer;
};

class Printer {
  public:
    void print(Box b) {
      cout << "Friend Class" << endl;
      cout << "Length of Box = " << b.length << endl;
    }
};

int main() {
  Box b1(15);
  Printer p;
  p.print(b1);
  cout << "\nProgram Writer Info" << endl
       << "Name: Paramveer Singh" << endl
       << "Roll Number: 2415209" << endl
       << "Section: D1" << endl;
  return 0;
}
