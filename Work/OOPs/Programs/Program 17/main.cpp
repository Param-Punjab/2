#include <iostream>
using namespace std;

class DynamicArray {
  int *arr;
  int size;

  public:
    DynamicArray(int s) {
      size = s;
      arr = new int[size];
      cout << "Dynamic Constructor Called" << endl;

      for (int i = 0; i < size; i++) {
        arr[i] = i+1;
      }
    }

    void display() {
      cout << "Array elements: ";
      for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }

    ~DynamicArray() {
      delete[] arr;
      cout << "Memory released by Destructor" << endl;
    }
};

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;

  DynamicArray obj(n);
  obj.display();

  cout << "\nProgram Writer Info" << endl
       << "Name: Paramveer Singh" << endl
       << "Roll Number: 2415209" << endl
       << "Section: D1" << endl;

  return 0;
}
