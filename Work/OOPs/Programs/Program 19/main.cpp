// Program to illustrate the concept of single inheritance
#include <iostream>
using namespace std;

class my_class {
  protected:
     string something = "HELLO WORLD"; 
};

class in_class: public my_class {
  public:
     in_class() {
       cout << something << endl;
     } 
};

int main() {
	cout << "--- SINGLE INHERITANCE ---" << endl;
  in_class a1;

  cout << "\nProgram Wrtier Info" << endl;
  cout << "Name: Paramveer Singh" << endl;
  cout << "URN: 2435110" << endl;
  cout << "Section: D1" << endl;
	return 0;
}
