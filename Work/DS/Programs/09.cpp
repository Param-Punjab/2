#include <iostream>
#include <cstdlib>
using namespace std;

void lines(int x, char y = '-', int z = 0) {
  for (int i = 0; i < x; ++i) {cout << y;}
  if (z == 1) {cout << endl;} else if (z == 2) {cout << endl << endl;}
}

struct Node {
public:
  string usn, name, branch, phone; int sem;Node* next;

  Node() {
    lines(43, '-', 1);
    cout << "Creating new node (Constructor Auto Call)!" << endl;
    cout << "Enter USN: ";
    cin >> usn;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Branch: ";
    getline(cin, branch);
    cout << "Enter Semester: ";
    cin >> sem;
    cin.ignore();
    cout << "Enter Phone Number: ";
    getline(cin, phone);
  }

  static void display(Node* head);
  static void InsertAtBeginning(Node*& head);
  static void InsertAtEnd(Node*& head);
  static void InsertAtMid(Node*& head);
  static int NumberOfNode(Node* head);
  static void DelAtBegining(Node*& head);
  static void DelAtEnd(Node*& head);
  static void DelAtNth(Node*& head, int c);
};

void Node::display(Node* head) {
  system("clear");
  Node* PTR = head;
  if (PTR == nullptr) { lines(18, '~', 1); cout << "There is no record" << endl; lines(18, '~', 2); } 
  else {
    cout << "\nNumber of Nodes: " << NumberOfNode(head) << endl << endl;
    lines(30, '#', 1);
    while (PTR != nullptr) {
      cout << "Name: " << (*PTR).name << endl 
           << "USN: " << (*PTR).usn << endl 
           << "Branch: " << (*PTR).branch << endl 
           << "Semester: " << (*PTR).sem << endl
           << "Phone Number: " << (*PTR).phone << endl;
      if ((*PTR).next == nullptr) {}
      else { lines(15, ' '); lines(1, '-'); lines(15, ' '); cout << endl; }
      PTR = (*PTR).next;
    }
    lines(30, '#', 1); cout << endl;
  }
}

void Node::InsertAtBeginning(Node*& head) {
  Node* newNode = new Node();
  Node* PTR = head;
  if (head == nullptr) {
    head = newNode; (*newNode).next = nullptr;
    system("clear");
    lines(40, '~', 1); cout << "Added Successfully! [Position: Begining]" << endl; lines(40, '~', 2);
    return;
  } else {
    head = newNode; (*newNode).next = PTR;
    cout << "" << endl;
    system("clear");
    lines(40, '~', 1); cout << "Added Successfully! [Position: Begining]" << endl; lines(40, '~', 2);
    return;
  }
}

void Node::InsertAtEnd(Node*& head) {
  Node* newNode = new Node(); (*newNode).next = nullptr;
  if (head == nullptr) {
    head = newNode; (*newNode).next = nullptr;
    system("clear");
    lines(38, '~', 1); cout << "Added Successfully! [Position: Ending]" << endl; lines(38, '~', 2);
    return;
  } else {
    Node* PTR = head;
    while ((*PTR).next != nullptr) { PTR = (*PTR).next; }
    (*PTR).next = newNode;
    system("clear"); 
    lines(38, '~', 1); cout << "Added Successfully! [Position: Ending]" << endl; lines(38, '~', 2);
    return;
  }
}

void Node::InsertAtMid(Node *&head) {
  Node* newNode = new Node();
  if (head == nullptr) {
    head = newNode; (*newNode).next = nullptr;
    system("clear");
    lines(35, '~', 1); cout << "Added Successfully! [Position: Mid]" << endl; lines(35, '~', 2);
    return;
  } else {
    Node* PTR = head; int n = NumberOfNode(head)/2;

    for (int i = 1; i < n; ++i) { PTR = (*PTR).next; }
    Node* temp = (*PTR).next; (*PTR).next = newNode; (*newNode).next = temp;
    system("clear");
    lines(35, '~', 1); cout << "Added Successfully! [Position: Mid]" << endl; lines(35, '~', 2);
    return;
  }
}

int Node::NumberOfNode(Node* head) {
  int number = 0; Node* PTR = head;
  while (PTR != nullptr) { number += 1; PTR = (*PTR).next; }
  return number;
}

void Node::DelAtBegining(Node *&head) {
  system("clear");
  if (head == nullptr) { lines(18, '~', 1); cout << "There is no record" << endl; lines(18, '~', 2); } 
  else {
    head = (*head).next;
    lines(21, '~', 1); cout << "Successfully deleted!" << endl; lines(21, '~', 2);
    return;
  }
}

void Node::DelAtEnd(Node*& head) {
  if (head == nullptr) { lines(18, '~', 1); cout << "There is no record" << endl; lines(18, '~', 2); } 
  else if ((*head).next == nullptr){
    head = nullptr;
    system("clear");
    lines(38, '~', 1); cout << "Deletion Successfully! [Position: End]" << endl; lines(38, '~', 2);
    return;
  } else {
  Node* PTR = head;
  int n = Node::NumberOfNode(head);
  for (int i = 2; i < n; ++i) { PTR = (*PTR).next; }
  (*PTR).next = nullptr;
  system("clear");
  lines(36, '~', 1); cout << "Successfully Deleted [Position: End]" << endl; lines(36, '~', 2);
  return;
  }
}

void Node::DelAtNth(Node *&head, int c) {
  int n = Node::NumberOfNode(head);
  if (n > c && c < 1) { cout << "out of range" << endl; } 
  else if (c == 1) { 
    head = (*head).next;
    system("clear"); 
    lines(36, '~', 1); cout << "Deletion Successfully! [Position: " << c << "]" << endl; lines(36, '~', 2);
    return;
  } else {
    Node* PTR = head;
    for (int i = 2; i < c; ++i) { PTR = (*PTR).next; }

    Node* temp = (*PTR).next;
    (*PTR).next = (*temp).next;
    system("clear");
    lines(36, '~', 1); cout << "Deletion Successfully! [Position: " << c << "]" << endl; lines(36, '~', 2);
    return;
  }
}

int main() {
  Node* head = nullptr;
  char c;
  do {
    system("clear");
Main:
    cout << "Menu Driven Program v0.9" << endl;
    cout << "1. Insertion" << endl;
    cout << "2. Deletion" << endl;
    cout << "3. Records & Nodes" << endl;
    cout << "4. Exit" << endl;
    cout << "Choice: ";
MainInput:
    cin >> c;

    switch (c) {
      case '1':
        char i;
        do {
Insert:
          system("clear");
          cout << "Menu Driven Program v0.9 > Insertion" << endl;
          cout << "1. Begining [Insertion]" << endl;
          cout << "2. Ending   [Insertion]" << endl;
          cout << "3. Middle   [Insertion]" << endl;
          cout << "4. Back to Menu" << endl;
          cout << "5. Exit" << endl;
          cout << "Choice: ";
InsertInput:
          cin >> i;

          switch (i) {
            case '1':
              system("clear");
              cout << "Menu Driven Program v0.9 > Insertion > Begin" << endl;
              Node::InsertAtBeginning(head);
              goto Main;
            case '2':
              system("clear");
              cout << "Menu Driven Program v0.9 > Insertion > End" << endl;
              Node::InsertAtEnd(head);
              goto Main;
            case '3':
              system("clear");
              cout << "Menu Driven Program v0.9 > Insertion > Mid" << endl;
              Node::InsertAtMid(head);
              goto Main;
            case '4':
              system("clear");
              goto Main;
            case '5':
              char x;
              cout << "Are you sure [y/n]: ";
              cin >> x;
              if (x == 'y' || x == 'Y') {
                cout << "Exiting...!" << endl;
                return 0;
              } else  {
                system("clear");
                goto Insert;
              }
            default:
              cout << "Invalid Input [1-4]: ";
              goto InsertInput;
          }

        } while (i != '4');

      case '2':
        char d;
        do {
Delete:
          system("clear");
          cout << "Menu Driven Program v0.9 > Deletion" << endl;
          cout << "1. Begining [Deletion]" << endl;
          cout << "2. Ending   [Deletion]" << endl;
          cout << "3. Nth Node [Deletion]" << endl;
          cout << "4. Go Back to menu" << endl;
          cout << "4. Exit" << endl;
DeleteInput:
          cout << "Choice: ";
          cin >> d;

          switch (d) {
            case '1':
              Node::DelAtBegining(head);
              goto Main;
            case '2':
              Node::DelAtEnd(head);
              goto Main;
            case '3':
              system("clear");
              int n;
              cout << "Menu Driven Program v0.9 > Deletion > Nth Node" << endl;
              cout << "Enter Nth Node: ";
              cin >> n;
              Node::DelAtNth(head, n);
              goto Main;
            case '4':
              system("clear");
              goto Main;
            case '5':
              char x;
              cout << "Are you sure [y/n]: ";
              cin >> x;
              if (x == 'y' || x == 'Y') {
                cout << "Exiting...!" << endl;
                return 0;
              } else  {
                system("clear");
                goto Delete;
              }
            default:
              cout << "Invalid Input [1-4]: ";
              goto DeleteInput;
          }

        } while (d != '4');

      case '3':
        Node::display(head);
        goto Main;

      case '4':
        cout << "Exiting...!" << endl;
        break;

      default:
        cout << "Enter a valid input [1-4]: ";
        goto MainInput;
        break;
    }
  } while (c != '4');

  return 0;
}
