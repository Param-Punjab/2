//Following program shows the implementation of queues
#include <iostream>
#define MAX 1000
using namespace std;

class Queue{
public:
    int arr[MAX];
    int front, rear;

    Queue(){
        front = -1;
        rear = -1;
    }

    void Enqueue(int val){
        if (rear == MAX-1){
            cout<<"Queue Overflow!\n"; return;
        }
        if (front == -1) front = 0; 
        arr[++rear] = val;
        cout<<"Value inserted!\n";
    }

    void Dequeue(){
        if (front == -1 || front > rear){
            cout<<"Queue Underflow!\n"; return;
        }
        else cout<<arr[front++]<<" deleted!\n";
    }

    void display(){
        if (front == -1 || front > rear){
            cout<<"Queue is empty!\n"; return;
        }
        for (int i = front; i <= rear; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};


int main(){
    Queue q;
    while(true){
        cout<<"---QUEUE(Array implementation)---\n"
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
            case 4: cout<<"Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\n"; return 0;
            default: cout<<"Invalid Choice!\n";
        }
    }
}
