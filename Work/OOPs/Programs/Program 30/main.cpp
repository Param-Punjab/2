// Program to overload unary minux operator
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    void operator-() {
        value = -value;   
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
  cout << "Overload Uniry Minus\n" << endl;
    Number num(25);

    cout << "Original number: ";
    num.display();

    -num;   

    cout << "After applying unary minus: ";
    num.display();

    cout << "\nProgram Writer Info" << endl;
    cout << "Name: Param Matharoo" << endl;
    cout << "URN: 2435110" << endl;
    cout << "Section: D1" << endl;

    return 0;
}

