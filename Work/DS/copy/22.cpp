#include <iostream>
#define MAX 100
using namespace std;

class CircularQueue {
    int arr[MAX], front, rear;
public:
    CircularQueue() { front = rear = -1; }

    bool isEmpty() { return front == -1; }
    bool isFull() { return (front == 0 && rear == MAX-1) || ((rear+1)%MAX == front); }

    void Enqueue(int val) {
        if (isFull()) { cout << "Queue Overflow!\n"; return; }
        rear = (rear+1) % MAX;
        arr[rear] = val;
        if (front == -1) front = 0;
        cout << val << " inserted into the queue.\n";
    }

    void Dequeue() {
        if (isEmpty()) { cout << "Queue Underflow!\n"; return; }
        cout << arr[front] << " deleted from the queue.\n";
        if (front == rear) front = rear = -1;
        else front = (front+1) % MAX;
    }

    void display() {
        if (isEmpty()) { cout << "Queue is empty.\n"; return; }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i+1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q; int choice, val;
    while (true) {
        cout << "\n--- Circular Queue Menu ---\n";
        cout << "1. Insert (Enqueue)\n";
        cout << "2. Delete (Dequeue)\n";
        cout << "3. Display Queue\n";
        cout << "4. Check Overflow\n";
        cout << "5. Check Underflow\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Enter value to insert: "; cin >> val; q.Enqueue(val); break;
            case 2: q.Dequeue(); break;
            case 3: q.display(); break;
            case 4: cout << (q.isFull() ? "Queue is full.\n" : "Queue is not full.\n"); break;
            case 5: cout << (q.isEmpty() ? "Queue is empty.\n" : "Queue is not empty.\n"); break;
            case 6: cout << "Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\n" ; return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
