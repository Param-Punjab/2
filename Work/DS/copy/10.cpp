#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class SCLL {
public:
    Node* header;  // Header node

    SCLL() {
        header = new Node(-1); // Header data can be -1 (dummy)
        header->next = header; // Initially points to itself
    }

    // Insertion in sorted order
    void insert(int data) {
        Node* newNode = new Node(data);

        Node* prev = header;
        Node* current = header->next;

        // Empty list: header points to itself
        if (current == header) {
            header->next = newNode;
            newNode->next = header;
            cout << "Insertion Successful!\n";
            return;
        }

        // Traverse to find insertion point
        while (current != header && current->data < data) {
            prev = current;
            current = current->next;
        }

        prev->next = newNode;
        newNode->next = current;

        cout << "Insertion Successful!\n";
    }

    // Deletion by value
    void del(int val) {
        Node* prev = header;
        Node* current = header->next;

        if (current == header) {
            cout << "List is already empty!\n";
            return;
        }

        bool found = false;

        while (current != header) {
            if (current->data == val) {
                prev->next = current->next;
                delete current;
                cout << "Deletion Successful!\n";
                found = true;
                break;
            }
            prev = current;
            current = current->next;
        }

        if (!found)
            cout << "Value " << val << " not found in list!\n";
    }

    // Display all nodes
    void display() {
        Node* temp = header->next;
        if (temp == header) {
            cout << "List is empty!\n";
            return;
        }

        cout << "Nodes: ";
        while (temp != header) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "(back to header)\n";
    }
};

int main() {
    SCLL list;
    while (true) {
        cout << "---Sorted Circular List Operations with Header Node---\n"
             << "1. Insertion\n"
             << "2. Deletion\n"
             << "3. Display all\n"
             << "4. Exit\n";

        int val, choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> val;
                list.insert(val);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> val;
                list.del(val);
                break;
            case 3:
                list.display();
                break;
            case 4:
                cout << "Exiting...\n";
                cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";      
                return 0;
            default:
                cout << "Invalid Choice\n";
        }
    }
}
