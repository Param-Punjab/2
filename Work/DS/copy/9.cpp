#include <iostream>
using namespace std;

class Student{
public: 
    string name, branch;
    long URN, sem, ph;
    Student* next;

    Student(){
        next = NULL;
    }

    void getInfo(){
        cout<<"Enter Student's name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter Student's Branch: ";
        getline(cin, branch);
        cout<<"Enter URN: ";
        cin>>URN;
        cout<<"Enter Semester: ";
        cin>>sem;
        cout<<"Enter Phone Number: ";
        cin>>ph;
    }

    void display(){
        cout<<"Name: "<<name<<endl
            <<"URN: "<<URN<<endl
            <<"Branch: "<<branch<<endl
            <<"Semester: "<<sem<<endl
            <<"Phone Number: "<<ph<<endl;
    }
};

class SLL{
public:
    Student* head;

    SLL(){
        head = NULL;
    }

    void insertAtBeginning(){
        Student* newNode = new Student();
        newNode->getInfo();
        newNode->next = head;
        head = newNode;
        cout<<"Insertion successful\n\n";
    }

    void insertAtEnd(){
        Student* newNode = new Student();
        newNode->getInfo();
        newNode->next = NULL;

        if (head == NULL){
            head = newNode;
            cout<<"Insertion successful!\n\n";
            return;
        }
        Student* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        cout<<"Insertion successful\n\n";
    }
    void insertAtPosition(int pos){
        if(pos < 1 || head == NULL){
            cout<<"Invalid Position!\n";
            return;
        }
        Student* newNode = new Student();
        newNode->getInfo();
        
        if (pos == 1){
            newNode->next = head;
            head = newNode;
            cout<<"Insertion successful!\n\n";
            return;
        }

        Student* temp = head;
        for (int i = 1; i < pos-1 && temp!=NULL; i++){
            temp = temp->next;
        }
        if (temp == NULL){
            cout<<"Position out of bounds!\n";
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout<<"Insertion successful!\n\n";
    }
    void deleteAtBeginning(){
        if (head == NULL){
            cout<<"List is already empty!\n";
            return;
        }
        Student* temp = head;
        head = head->next;
        delete temp;
        cout<<"Deletion successful!\n\n";
    }
    void deleteAtEnd(){
        if (head == NULL){
            cout<<"List is already empty!\n";
            return;
        }
        if (head->next == NULL){
            delete head;
            head = NULL;
            cout<<"Deletion successful!\n\n";
            return;
        }
        Student* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout<<"Deletion successful!\n\n";
    }
    void deleteAtPos(int pos){
        if (head == NULL || pos < 1){
            cout<<"Position out of Bound!\n";
            return;
        }
        if (head == NULL){
            cout<<"List is already empty!\n";
            return;
        }
        Student* temp = head;
        if (pos == 1){
            head = head->next;
            delete temp;
            cout<<"Deletion successful!\n\n";
            return;
        }
        for (int i = 1; i < pos-1 && temp!=NULL; i++){
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL){
            cout<<"Position out of bounds!\n";
            return;
        }
        Student* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete; 
        cout<<"Deletion successful!\n\n";
    }
    void display(){
        if (head == NULL){
            cout<<"Nothing to display!\n";
            return;
        }

        Student* temp = head;
        int count = 1;
        while(temp!= NULL){
            cout<<"\n---Student "<<count<<" ---\n";
            temp->display();
            temp = temp->next;
            count++;
        }
    }
};

int main(){
    SLL s1;
    while(true){
        cout<<"---Student Data(Using SLL)---\n\n"
            <<"1. Enter 1 to insert data in the beginning of list\n"
            <<"2. Enter 2 to insert data in the end of list\n"
            <<"3. Enter 3 to insert data at a given position\n"
            <<"4. Enter 4 to delete data from the beginning\n"
            <<"5. Enter 5 to delete data from the end\n"
            <<"6. Enter 6 to delete data from a given position\n"
            <<"7. Enter 7 to display all data\n"
            <<"8. Enter 8 to exit the program\n";

        int choice, pos;
        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:
                s1.insertAtBeginning();
                break;
            case 2:
                s1.insertAtEnd();
                break;
            case 3:
                cout<<"Enter position: ";
                cin>>pos;
                s1.insertAtPosition(pos);
                break;
            case 4:
                s1.deleteAtBeginning();
                break;
            case 5:
                s1.deleteAtEnd();
                break;
            case 6:
                cout<<"Enter position: ";
                cin>>pos;
                s1.deleteAtPos(pos);
                break;
            case 7:
                s1.display();
                break;
            case 8:
                cout<<"Exiting...\n";
                cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
                return 0;
            default:
                cout<<"Invalid Input!\n";
                break;
        }
    }
    return 0;
}
