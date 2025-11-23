// Design, Develop and Implement a menu driven Program for the following operations on STACK of Integers (Linked Implementation)
// 1. Push an Element on to STACK
// 2. Pop an Element from STACK
// 3. Display the elements of STACK
// 4. Exit

#include <iostream>
using namespace std;

int const MAX = 5;

struct Stack {
		int data;
		Stack* next;

		Stack(int a) {
			this->data = 1;
			this->next = nullptr;
		}
		Stack() 
		{
			cout << "Element: ";
			cin >> this->data;
		}

		void getdata() {
			cout << "HELLO WORLD" << endl;
		}
};




int main() {
	Stack TOP;
	char c;
	do {
		cout << "--- MENU DRIVEN PROGRAM ---" << endl;
		cout << "1. PUSH" << endl;
		cout << "2. POP" << endl;
		cout << "3. DISPLAY" << endl;
		cout << "4. EXIT" << endl;
		cout << "CHOICE: ";
		cin >> c;

		switch (c) {
		case '1':
			if (TOP.data == 1) {
				Stack* ptr = new Stack;
				TOP.next = ptr;
				(*ptr).next = nullptr;
				TOP.data += 1;
			} else if (TOP.data == 6) {
				cout << "OVERFLOW" << endl;
			} else {
				Stack* ptr = new Stack;
				(*ptr).next = TOP.next;
				TOP.next = ptr;
				TOP.data += 1;
			}
			break;

		case '2':
			if ((*TOP).data == nullptr) {}

		
		default:
			break;
		}
	} while(c != '4');

	return 0;
}