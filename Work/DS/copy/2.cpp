#include <iostream>
#include <vector>

using namespace std;

class ArrOp{
public:
	vector<int> arr;

	ArrOp(){
		int size;
		cout<<"Enter the size of the array: ";
		cin>>size;

		if (size <= 0){
			cout<<"Size should be a positive number!\n";
			return;
		}
		else{
			cout<<"Enter the elements of array: \n";
			for (int i = 0; i < size; i++){
				int num;
				cin>>num;
				arr.push_back(num);
			}
		}
	}

	void displayElements(){
		if (arr.empty()) cout<<"Array is empty. Nothing to display!\n";

		else{
			for (int i: arr) cout<<i<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
	void insertElement(){
		int pos, num;
		cout<<"Enter the index to add element to corresponding index: ";
		cin>>pos;
		
		if (pos >= 0 && pos <= arr.size()){
			cout<<"Enter the element: ";
			cin>>num;
			arr.insert(arr.begin()+pos, num);
		}
		else cout<<"Enter a valid index!\n";
		cout<<endl;
	}
	void deleteElement(){
		int pos;
		cout<<"Enter the index to remove element of the corresponding index: ";
		cin>>pos;
		
		if (pos>=0 && pos < arr.size()){
			arr.erase(arr.begin()+pos);
			cout<<"Element deleted successfully!\n";
		}
		else cout<<"Enter a valid index!\n";
		cout<<endl;
	}
};

int main(){
	ArrOp a;
	int choice;

	while(true){
		cout<<"---Linear Array Operations---\n";
		cout<<"1. Press 1 for displaying elements\n";
		cout<<"2. Press 2 for inserting element\n";
		cout<<"3. Press 3 for deleting element\n";
		cout<<"4. Press 4 to exit\n";

		cout<<"\nEnter choice: \n";
		cin>>choice;

		if (choice == 1) a.displayElements();
		else if (choice == 2) a.insertElement();
		else if (choice == 3) a.deleteElement();
		else if (choice == 4){
			cout<<"Exitting the program\n";
			break;
		}
		else cout<<"Enter a valid choice!\n";
	}
	cout<<"Name: Nihal Kainth\nCRN: 2415200\nURN: 2435101\n";
}
