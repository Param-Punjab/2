// Program to overload prefix and postfix increment operators
#include <iostream>
using namespace std;

class Count {
    int value;

public:
    Count(int v = 0) {
        value = v;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }

    Count operator++() {
        ++value;        
        return *this;   
    }

    Count operator++(int) {
        Count temp = *this;  
        value++;             
        return temp;         
    }
};

int main() {
  cout << "PRE / POST Increment Overload\n" << endl;
    Count obj(5);

    cout << "Initial value ";
    obj.display();

    ++obj;   
    cout << "After prefix increment (++obj) ";
    obj.display();

    obj++;   
    cout << "After postfix increment (obj++) ";
    obj.display();

    cout << "\nProgram  Writer Info" << endl;
    cout << "Name: Param Matharoo" << endl;
    cout << "URN: 2435110" << endl;
    cout << "Section: D1" << endl;
    return 0;
}

