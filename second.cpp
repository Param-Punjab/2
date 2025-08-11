#include <iostream>
#include <vector>
using namespace std;

void display_element(vector<int> arr) {
	int n = arr.size();
	if (n != 0) {
		cout << "Array = { ";                  	
	        for (int i = 0; i < n; ++i) {
	        	if (i < n-1) {
	        		cout << arr[i] << ", ";
	        	} else {
	        		cout << arr[i];
	        	}
	        }
	        cout << " }\n" << endl;                
	} else {
		cout << "The array is empty!" << endl;
	}
}

vector<int> insert_element(vector<int> arr) {
	int el, in, n = arr.size();
	cout << "Enter Integer element: ";
	cin >> el;
	cout << "Enter indexing: ";
again_indexing:
	cin >> in;
	
	if (in < n) {
		arr.resize(n+1);
		for (int i = n; i >= in; --i) {	
	        	arr[i] = arr[i-1];  
	        }
	        arr[in] = el;
                                               
	        return arr;                    
	} else {
		cout << "Error: Out of indexing\n";
		display_element(arr);
		cout << "Enter indexing again: ";
		goto again_indexing;
	}
}

vector<int> delete_element(vector<int> arr) {
	int in, n = arr.size();
	cout << "Enter indexing: ";
again_indexing:
	cin >> in;

	if (in < n) {
		for (int i = in; i < n; ++i) {	
	        	arr[i] = arr[i+1];
	        }
	        arr.resize(n-1);
	        return arr;                   
	} else {
		cout << "Error: Out of indexing\n";
		display_element(arr);
		cout << "Enter indexing again: ";
		goto again_indexing;
	}
}
	
int main() {
	vector<int> arr = {0, 1, 2, 3, 4};
	int n;

menu_start:
	cout << "Menu Driven Program v0.9" << endl;
	cout << "1. Display Array Elements" << endl;
	cout << "2. Insertin an Element (ELEM)" << endl;
	cout << "3. Deleting an Element (POS)" << endl;
	cout << "4. Exit" << endl;
choice_start:
	cout << "Enter your choice: ";
	cin >> n;

	switch(n) {
		case 1:
			display_element(arr);
			goto menu_start;
		case 2:
			arr = insert_element(arr);
			display_element(arr);
			goto menu_start;
		case 3:
			arr = delete_element(arr);
			display_element(arr);
			goto menu_start;
		case 4:
			cout << "Exiting!";
			break;
		default:
			cout << "Invalid Input" << "\nEnter in between [1-4]" << endl;
			goto choice_start;
	}

	cout << "\n\nProgram Writer Info: ";
	cout << "\nName: Paramveer Singh";
  	cout << "\nCRN: 2415209";
  	cout << "\nSection: D";
  	cout << "\nGroup: D1";

	return 0;
}
