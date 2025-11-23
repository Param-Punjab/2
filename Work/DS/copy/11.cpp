#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
    string ssn, name, dept, ph, desig;
    double salary;
    Employee* next;
    Employee* prev;

    Employee(){
        next = NULL;
        prev= NULL;
    }
    void getInfo(){
        cout<<"Enter SSN of Employee: ";
        cin>>ssn;
        cout<<"Enter name of Employee: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter department: ";
        getline(cin, dept);
        cout<<"Enter designation: ";
        getline(cin, desig);
        cout<<"Enter Salary: ";
        cin>>salary;
        cout<<"Enter Phone Number: ";
        cin.ignore();
        getline(cin, ph);
    }
    void display(){
        cout<<"SSN: "<<ssn<<endl
            <<"Name: "<<name<<endl
            <<"Department: "<<dept<<endl
            <<"Designation: "<<desig<<endl
            <<"Salary: "<<salary<<endl
            <<"Phone Number: "<<ph<<endl<<endl;
    }
};

class DLL{
public:
    Employee* head;
    DLL(){
        head = NULL;
    }
    void insertAtBeginning(){
        Employee* newNode = new Employee();
        newNode->getInfo();
        if (head == NULL){
            head = newNode;
            cout<<"Insertion Successful!\n";
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        cout<<"Insertion Successful!\n";
    }
    void insertAtEnd(){
        Employee* newNode = new Employee();
        newNode->getInfo();

        if (head == NULL){
            head = newNode;
            cout<<"Insertion Successful!\n";
            return;
        }
        Employee* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        
        temp->next = newNode;
        newNode->prev = temp;
        cout<<"Insertion Successful!\n";
    }
    void insertAtPos(int pos){
        if(pos < 1){
            cout<<"Invalid Position!\n";
            return;
        }
        if (pos == 1){
            insertAtBeginning();
            return;
        }
        Employee* temp = head;
        for (int i = 1; i < pos-1 && temp != NULL; i++)
            temp = temp->next;
        if (temp == NULL){
            cout<<"Position out of Range. Insert at end instead\n";
            insertAtEnd();
            return;
        }
        Employee* newNode = new Employee();
        newNode->getInfo();
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;
        temp->next = newNode;
        cout<<"Insertion Successful!\n";
    }
    void deleteAtBeginning(){
        if (head == NULL){
            cout<<"Nothing to delete!\n";
            return;
        }
        Employee* temp = head;
        head = head->next;
        if (head != NULL){
            head->prev = NULL;
        }
        delete temp;
        cout<<"Deletion Successful!\n";
    }
    void deleteAtEnd(){
        if (head == NULL){
            cout<<"Nothing to delete!\n";
            return;
        }
        Employee* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        
        if (temp->prev == NULL)
            head = NULL;
        else 
            temp->prev->next = NULL;
        delete temp;
        cout<<"Deletion Successful!\n";
    }
    void deleteAtPos(int pos){
        if (head == NULL){
            cout<<"Nothing to delete!\n";
            return;
        }
        if (pos < 1){
            cout<<"Invalid Position!\n";
            return;
        }
        Employee* temp = head;
        for (int i = 1; i < pos && temp != NULL; i++){
            temp = temp->next;
        }
        if (temp->prev == NULL){
            head = temp->next;
            if (head!= NULL)
                head->prev = NULL;
        }
        else if (temp->next == NULL)
            temp->prev->next = NULL;
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        delete temp;
        cout<<"Deletion Successful!\n";
    }

    void display(){
        if (head == NULL){
            cout<<"List is empty!\n";
            return;
        }
        Employee* temp = head;
        int count = 1;
        while(temp!= NULL){
            cout<<"Employee "<<count<<" data: \n";
            temp->display();
            temp = temp->next;
            count++;
        }
    }
};

int main(){
    DLL list;
    while(true){
        cout<<"---EMPLOYEE RECORDS---\n"
            <<"1. Insert Data at beginning\n"
            <<"2. Insert Data at End\n"
            <<"3. Insert Data in middle\n"
            <<"4. Delete Data from beginning\n"
            <<"5. Delete Data from end\n"
            <<"6. Delete Data from middle\n"
            <<"7. Display all records\n"
            <<"8. Exit the program\n";
        int choice, pos;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: list.insertAtBeginning(); break;
            case 2: list.insertAtEnd(); break;
            case 3:
                cout<<"Enter position: ";
                cin>>pos;
                list.insertAtPos(pos);
                break;
            case 4: list.deleteAtBeginning(); break;
            case 5: list.deleteAtEnd(); break;
            case 6:
                cout<<"Enter position: ";
                cin>>pos;
                list.deleteAtPos(pos);
                break;
            case 7: list.display(); break;
            case 8: 
                    cout<<"Exiting...\n"; 
                    cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
                    return 0;
            default: cout<<"Invalid Choice!\n";
        }
    }
}
