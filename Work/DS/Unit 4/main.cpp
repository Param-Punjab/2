#include <iostream>
using namespace std;

const int MAXSTK = 8;

class Node {
public:
  int data;
  Node* next;

  Node(int x = 0) {
    if (x == 1) {
      cout << "Enter Number of Elements: ";
      cin >> data;
      if (data >= 1) {
        for (int i = 0; i < data; i++ ) {
          Node* newNode = new Node();
          Node* PTR = next;
          next = newNode;
          (*newNode).next = PTR;
        }
      }
    } else {
      cout << "Enter data: ";
      cin >> data;
    }
  }

  void PUSH(Node*& TOP, int MAXSTK) {
    if ((*TOP).data == MAXSTK) {
      cout << "OVERFLOW" << endl;
    } else {
      Node* newNode = new Node();
      (*TOP).data += 1;
      Node* PTR = (*TOP).next;
      (*TOP).next = newNode;
      (*newNode).next = PTR;
    }
  }

  int POP(Node*& TOP, int MAXSTK) {
    if ((*TOP).data == -1 && (*TOP).data == 0) {
      cout << "UNDERFLOW" << endl;
    } else {
      Node* PTR = (*TOP).next;
      int item = (*PTR).data;
      PTR = (*PTR).next;
      (*TOP).next = PTR;
      (*TOP).data -= 1;
      return item;
    }
  }

  int PEEK(Node* TOP) {
    if ((*TOP).data == -1) {
      cout << "UNDERFLOW" << endl;
    } else {
      int x = (*TOP).data;
      return x;
    }
  }
};


int main() {
  Node* TOP = new Node(1);

  int POP = (*TOP).POP(TOP, MAXSTK);
  cout << "POPED idtem: " << POP << endl;
  cout << "value of TOP: " << (*TOP).data << endl;
  return 0;
}
