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

void TraLRoRi(Node* root) {
  Node* ptr = new Node;
  Node* ptr_2 = new Node;

  if ( (*root).left != nullptr) {
    ptr = (*root).left;
    if ( (*ptr).left != nullptr ) {
      ptr_2 = (*ptr).left;
      if ((*ptr_2).left != nullptr) { TraLRoRi(ptr_2);
      } else { cout << ptr_2->data << endl; }
    }

    cout << (*ptr).data << endl;
    if ( (*ptr).right != nullptr ) {
      Node* ptr_r = new Node;
      ptr_r = (*ptr).right;
      TraLRoRi(ptr_r);
    } 

    cout << (*root).data << endl;
  } else if ( (*root).right != nullptr ) {
    Node* root_ptr_r = new Node;
    root_ptr_r = (*root).right;
    if ( root_ptr_r->left != nullptr) { 
      Node* new_ptr = new Node;
      new_ptr = root_ptr_r->left;
      TraLRoRi(new_ptr);
    }
    cout << root_ptr_r->data << endl;
    if (root_ptr_r->right != nullptr) { 
      Node* new_ptr_r = new Node;
      new_ptr_r = root_ptr_r->right;
      TraLRoRi(new_ptr_r);
    }
  }
}


int main() {
  cout << "I am Param" << endl;
  Node* root;
  root = Create();
  cout << "Printing Elements In Order" << endl;
  TraLRoRi(root);
  return 0;
}