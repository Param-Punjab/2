// Design, Develop and Implement a menu driven Program for the following operations on STACK of Integers (Array Implementation of Stack with maximum size MAX)
// 1. Push an Element on to Stack
// 2. Pop an Element from Stack
// 3. Display the elements of Stack
// 4. Exit
#include <iostream>
using namespace std;

int const MAX = 5;


int main() {
  char arr[MAX];
  int TOP = 1;
  char c;
  do {
    cout << "\n--- MENU DRIVEN PROGRAM ---" << endl;
    cout << "1. PUSH" << endl;
    cout << "2. POP" << endl;
    cout << "3. DISPLAY" << endl;
    cout << "4. EXIT" << endl;
    cout << "CHOICE: ";
    cin >> c;

    switch(c) {
      case '1':
        if (TOP == 6) {
          cout << "OVERFLOW" << endl;
        } else {
          char el;
          cout << "Element: ";
          cin >> el;
          arr[TOP-1] = el;
          TOP += 1;
          cout << "PUSH SUCCESSFUL" << endl;
        }
        break;

      case '2':
        if (TOP == 1) {
          cout << "UNDERFLOW" << endl;
        } else {
          arr[TOP-2] = 0;
          TOP -= 1;
          cout << "POP SUCCESSFUL" << endl;
        }
        break;

      case '3':
        if (TOP == 1) {cout << "UNDERFLOW" << endl;}
        else {
          cout << "[ ";
          for (int i = 0; i < TOP; i++) {
            cout << arr[i] << " ";
          }
          cout << "]" << endl;
        }
        break;

      case '4':
        cout << "Exiting...!" << endl;
        break;

      default:
        cout << "INVALID INPUT" << endl;
        break;

    } 
  } while (c != '4');

  cout << "\n\nProgram Writer Info" << endl 
       << "Name: Param Matharoo" << endl
       << "URN: 2435110" << endl
       << "Section: D1" << endl;

  return 0;
}

