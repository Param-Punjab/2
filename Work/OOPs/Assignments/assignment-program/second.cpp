#include <iostream>
using namespace std;

class B;

class A {
  public:
    int m;
    int cm;
    friend void addition(A& A1, B& B1);

    A() {
      cout << "--- Enter Distance" << endl;
      cout << "Meters: ";
      cin >> m;
      cout << "Centimeters: ";
      cin >> cm;
    }

    void display() {
      cout << "--- FINAL ANSWER ---" << endl;
      cout << "Meters: " << m << endl;
      cout << "Centimeters: " << cm << endl;
    }
};

class B {
  public:
    int f;
    int i;
    friend void addition(A& A1, B& B1);

    B() {
      cout << "Enter Distance" << endl;
      cout << "Feet: ";
      cin >> f;
      cout << "Inches: ";
      cin >> i;
    }
};

void addition(A& A1, B& B1) {
  float total_cm = ((A1.m * 100) + A1.cm) + (B1.f * 30.48) + (B1.i * 2.54);
  A1.m = static_cast<int>(total_cm * 0.01);
  A1.cm = static_cast<int>(total_cm - (A1.m * 100));
}

int main() {
  A A1;
  B B1;
  addition(A1, B1);
  A1.display();
  return 0;
}
