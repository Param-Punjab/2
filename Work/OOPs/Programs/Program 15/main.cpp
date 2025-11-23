#include <iostream>
using namespace std;

class add {
  public:
    int x, y;
    add(int x, int y) {
      cout << "Parameterized Constructor" << endl;
      cout << x << " + " << y << " : " << x+y << endl;
    }
};

int main() {
  add a1(5,8);
  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Paramveer Singh" << endl;
  cout << "Roll Number: 2415209" << endl;
  cout << "Sectino: D1" << endl;
  return 0;
}
