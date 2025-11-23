#include <iostream>
using namespace std;

class Number {
  public:
    void identify() {
      cout << "Address of this object: " << this << endl;
    }
};

int main() {
  Number p1, p2;
  p1.identify();
  p2.identify();
  return 0;
}