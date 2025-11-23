#include <iostream>
using namespace std;

int count = 0;

class alpha {
  public:
    alpha() {
      count++;
      cout << "\nObject created by constructor";
    }

    ~alpha() {
      cout << "\nObject destroyed by destructor";
      count--;
    }
};

int main() {
  {alpha a1;}

  cout << "\n\nProgram Writer Info" << endl;
  cout << "Name: Paramveer Singh" << endl;
  cout << "Roll Number: 2415209" << endl;
  cout << "Section: D1" << endl;

  return 0;
}
