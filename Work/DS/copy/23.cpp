#include <iostream>
#define MAX 5
using namespace std;

class Dequeue {
    int arr[MAX], front, rear;
public:
    Dequeue() { front = rear = -1; }

    bool isEmpty() { return front == -1; }
    bool isFull() { return (front == 0 && rear == MAX-1) || ((rear+1)%MAX == front); }

    void insertFront(int val) {
        if (isFull()) { cout << "Overflow!\n"; return; }
        if (isEmpty()) front = rear = 0;
        else front = (front-1+MAX)%MAX;
        arr[front] = val;
        cout << val << " inserted at front.\n";
    }

    void insertRear(int val) {
        if (isFull()) { cout << "Overflow!\n"; return; }
        if (isEmpty()) front = rear = 0;
        else rear = (rear+1)%MAX;
        arr[rear] = val;
        cout << val << " inserted at rear.\n";
    }

    void deleteFront() {
        if (isEmpty()) { cout << "Underflow!\n"; return; }
        cout << arr[front] << " deleted from front.\n";
        if (front == rear) front = rear = -1;
        else front = (front+1)%MAX;
    }

    void deleteRear() {
        if (isEmpty()) { cout << "Underflow!\n"; return; }
        cout << arr[rear] << " deleted from rear.\n";
        if (front == rear) front = rear = -1;
        else rear = (rear-1+MAX)%MAX;
    }

    void display() {
        if (isEmpty()) { cout << "Deque is empty.\n"; return; }
        cout << "Deque elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i+1)%MAX;
        }
        cout << endl;
    }
};

int main() {
    Dequeue dq; int choice, val;
    while(true) {
        cout << "\n--- Deque Menu ---\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Rear\n";
        cout << "3. Delete from Front\n";
        cout << "4. Delete from Rear\n";
        cout << "5. Display Deque\n";
        cout << "6. Check Overflow\n";
        cout << "7. Check Underflow\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Enter value: "; cin >> val; dq.insertFront(val); break;
            case 2: cout << "Enter value: "; cin >> val; dq.insertRear(val); break;
            case 3: dq.deleteFront(); break;
            case 4: dq.deleteRear(); break;
            case 5: dq.display(); break;
            case 6: cout << (dq.isFull() ? "Deque is full.\n" : "Deque is not full.\n"); break;
            case 7: cout << (dq.isEmpty() ? "Deque is empty.\n" : "Deque is not empty.\n"); break;
            case 8: cout << "Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\n" ; return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
