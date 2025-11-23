// Program to illustrate the use of this pointer
// Program Number 28
#include <iostream>
using namespace std;

class person {
  public:
    string name;
    void* address;

    void setName(string name) {
      this->name = name;
      this->address = &(this->name);
    }

    void display() {
      cout << endl << "       DETAILS" << endl;
      cout << "Name: " << name << endl;
      cout << "Memory Address: " << address << endl;
    }
};

int main() {
  cout << "--- '->' THIS POINTER ---" << endl;
  person param;
  param.setName("Param Matharoo");
  param.display();

  cout << "\nProgram Writer Info" << endl;
  cout << "Name: Param Matharoo" << endl;
  cout << "Section: D1" << endl;
  cout << "URN: 2435110" << endl;
  return 0;
}
