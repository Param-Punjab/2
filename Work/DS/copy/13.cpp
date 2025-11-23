#include <iostream>
#define MAX 100
using namespace std;

class Stack{
    int arr[MAX];
    int top;

public:
    Stack() {top = -1;}

    void push(int val){
        if (top == MAX-1)
            cout<<"Stack Overflow! Cannot push!\n";
        else{
            arr[++top] = val;
            cout<<"Element pushed!\n";
        }}
    void pop(){
        if (top == -1)
            cout<<"Stack Underflow! Cannot pop!\n";
        else {
            cout<<arr[top--]<<" popped from the stack!\n";
        }}
    void display(){
        if (top == -1)
            cout<<"Stack is empty!\n";
        else{
            cout<<"Stack elements: \n";
            for (int i = 0; i <= top; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }}};

int main(){
    Stack s;
    while(true){
        cout<<"---Stack using Arrays---\n"
            <<"1. Push\n"
            <<"2. Pop\n"
            <<"3. Display all elements\n"
            <<"4. Exit\n";
        int choice, value;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: 
                cout<<"Enter element to push: ";
                cin>>value;
                s.push(value);
                break;
            case 2: s.pop(); break;
            case 3: s.display(); break;
            case 4: cout<<"Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n"; return 0;
            default: cout<<"Invalid Choice!\n";
        }}}
