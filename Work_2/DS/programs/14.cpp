// Design, Develop and Implement a menu driven Program for the following operations on STACK of Integers (Linked Implementation)
// a. Push
// b. Pop 
// c. Display
// d. Exit 

#include <iostream>
using namespace std;

int number = 0;
   
class Node {
    public:
    int data;
    Node* next;

    void static push(Node*& s, int el);
    void static pop(Node*& s);
    void static display(Node* s);
};

void Node::push(Node*& start, int el) {
    if (number == 5) { cout << "Overflow" << endl;}
    else {
        Node* ptr = new Node;
        (*ptr).next = (*start).next;
        (*ptr).data = el;
        (*start).next = ptr;
        cout << "Push Successfull" << endl;
        number += 1; 
    }
}

void Node::pop(Node*& start) {
    if ((*start).next == nullptr || number == 0) { cout << "Underflow" << endl; }
    else {
        Node* temp = (*start).next;
        (*start).next = (*temp).next;
        delete temp;
        cout << "Pop Successfull" << endl;
        number -= 1;
    }
}

void Node::display(Node* start) {
    cout << "Nodes: " << number << endl;
    if ((*start).next == nullptr) { cout << "start -> nullptr" << endl;}
    else {
        Node* ptr = (*start).next;
        cout << "start -> ";
        for (int i = 0; i < number; i++ ) {
            cout << (*ptr).data << " -> ";
            ptr = (*ptr).next;
        }
        cout << "nullptr" << endl;
    }
}

int main() {
    char c;
    Node* s = new Node;
    do {
        cout << "\n -- Menu Driven Program -- " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
choice:
        cout << "Choice: ";
        cin >> c;

        switch (c) {
        case '1':
            int el;
            cout << "Element: ";
            cin >> el;
            Node::push(s, el);
            break;
        
        case '2':
            Node::pop(s);
            break;

        case '3':
            Node::display(s);
            break;
        
        case '4':
            cout << "Exiting..!" << endl;
            break;

        default:
            cout << "Wrong Input" << endl;
            goto choice;
            break;
        }

    } while (c != '4');
    cout << "\nProgram Writer Info" << endl;
    cout << "Name: Param Matharoo" << endl;
    cout << "Section: D1" << endl;
    cout << "URN: 2435110" << endl;
    return 0;
}