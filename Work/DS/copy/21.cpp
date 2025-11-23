//program for Queue using linked list
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int d){
        data = d; next = NULL;
    }
};

class Queue{
public:
    Node* front;
    Node* rear;

    Queue(){
        front = rear = NULL;
    }

    void Enqueue(int val){
        Node* newNode = new Node(val);

        if (rear == NULL){
            front = rear = newNode; return;
        } 
        rear->next = newNode;
        rear = newNode;
        cout<<"Value inserted!\n";
    }
    void Dequeue(){
        if (front == NULL){
            cout<<"Nothing to delete\n"; return;
        }
        Node* temp = front;
        front = front->next;

        if (front == NULL) rear = NULL;
        cout<<temp->data<<" deleted!\n";
        delete temp;
    }
    void display(){
        if (front == NULL){
            cout<<"Nothing to display!\n"; return;
        }
        Node* temp = front;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    while(true){
        cout<<"---QUEUE(Linked-List implementation)---\n"
            <<"1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        int choice, val;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>val;
                q.Enqueue(val);
                break;
            case 2: q.Dequeue(); break;
            case 3: q.display(); break;
            case 4: cout<<"Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\n" ;return 0;
            default: cout<<"Invalid Choice!\n";
        }
    }
}
