// Program to add two complex numbers using binary operator overloading.
#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    // Constructor to initialize complex number
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Operator overloading for +
    Complex operator + (const Complex& obj) {
        Complex result;
        result.real = real + obj.real;    // Add real parts
        result.imag = imag + obj.imag;    // Add imaginary parts
        return result;
    }
};

int main() {
    cout << "Binary Operator Overloading (Complex Numbers)\n" << endl;

    Complex c1(3.2, 4.5);   // First complex number
    Complex c2(1.8, 2.5);   // Second complex number

    Complex c3 = c1 + c2;   // Using overloaded + operator

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    cout << "\nProgram Writer Info" << endl
         << "Name: Param Matharoo" << endl
         << "URN: 2435110" << endl
         << "Section: D1" << endl;
    return 0;
}

