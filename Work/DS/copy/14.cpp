#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int d){
        data = d; next = NULL;
    }};
class Stack{
public:
    Node* head;
    Stack() { head = NULL; }

    void push(int value){
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode; 
        cout<<"Element pushed!\n";
    }    
    void pop(){
        if (head == NULL){
            cout<<"Stack Underflow! Nothing to pop!\n";
        } else{
            Node* temp = head;
            head = head->next;
            delete temp;
            cout<<"Element popped!\n";
        }
    }
    void display(){
        if (head == NULL){
            cout<<"Nothing to display!\n"; return;
        }
        Node* temp = head;
        cout<<"Stack elements: \n";
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;        
    }};
int main(){
    Stack s;
    while(true){
        cout<<"---Stack Using Linked List---\n"
            <<"1. Push\n2. Pop\n3. Display all elements\n4. Exit\n";
        int choice, value;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value to push: ";
                cin>>value;
                s.push(value);
                break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            case 4: cout<<"Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n"; return 0;
            default: cout<<"Invalid Choice!\n";
        }}}
