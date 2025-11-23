#include <iostream>
#define MAX 5
using namespace std;

class PriorityQueue {
    int arr[MAX], size;
public:
    PriorityQueue() { size = 0; }

    bool isEmpty() { return size == 0; }
    bool isFull() { return size == MAX; }

    void insert(int val) {
        if (isFull()) { cout << "Queue Overflow!\n"; return; }
        int i = size-1;
        while(i>=0 && arr[i]<val) { arr[i+1]=arr[i]; i--; }
        arr[i+1]=val;
        size++;
        cout << val << " inserted into priority queue.\n";
    }

    void Delete() {
        if (isEmpty()) { cout << "Queue Underflow!\n"; return; }
        cout << arr[--size] << " deleted (lowest priority).\n";
    }

    void display() {
        if (isEmpty()) { cout << "Priority Queue is empty.\n"; return; }
        cout << "Priority Queue elements: ";
        for(int i=0;i<size;i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq; int choice, val;
    while(true) {
        cout << "\n--- Priority Queue Menu ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Enter value: "; cin >> val; pq.insert(val); break;
            case 2: pq.Delete(); break;
            case 3: pq.display(); break;
            case 4: cout << "Exiting...\n"; cout<<"Name: Nihal Kainth\nURN: 2435101\n" ;return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
