// Program to illustrate the concept of multilevel inharitance
#include <iostream>
using namespace std;

class first_class {
  protected:
  string name = "Param Matharoo";
};

class second_class: public first_class {
  protected:
    int age = 19;
};

class third_class: public second_class {
  public:
    void display() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
    }
};

int main() {
  cout << "--- MULTILEVEL INHERITANCE ---" << endl;
  third_class a1;
  a1.display();
  cout << "\nPROGRAM WRITER INFO" << endl;
  cout << "NAME: PARAM" << endl;
  cout << "SECTION: D1" << endl;
  cout << "URL: 2435110";
  return 0;
}
