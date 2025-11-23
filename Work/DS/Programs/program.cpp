#include <iostream>
using namespace std;

struct Node {
  public:
    int data;
    Node* left;
    Node* right;

};

Node* Create() {
  int x;
  Node* ptr = new Node;
  cout << "Enter data: ";
  cin >> x;
  (*ptr).data = x;
  int y; cout << "Want left child of " << x << " ? (0 = No, 1 = Yes): ";
  cin >> y;
  if( y == 0 ) { (*ptr).left = nullptr; }  
  else {
    (*ptr).left = Create();
  }
  int z; cout << "Want right child of " << x << " ? (0 = No, 1 = Yes): ";
  cin >> z;
  if ( z == 0 ) { (*ptr).right = nullptr; } 
  else {
    (*ptr).right = Create();
  }
  return ptr;
}

int main() {
  Node* root;
  root =  Create();
  return 0;
}