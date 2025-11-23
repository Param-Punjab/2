#include <iostream>
#include <vector>

using namespace std;

int searchElement(vector<int> arr, int s, int search){
	bool found = false;
	for (int i = 0; i < s; i++){
		if (arr[i] == search){
			found = true;
			return i;
		}
	}
	return 0;
}

int main(){
	vector<int> arr;
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;

	cout<<"Enter the elements of array: \n";
	for (int i = 0; i < size; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}

	int search;
	cout<<"Enter the element you want to search: \n";
	cin >> search;

	int res = searchElement(arr, size, search);

	if (res!=0){
		cout<<"Found at index: "<<res<<endl;
	}
	else
		cout<<"Element not found!\n";
	cout<<"Name: Nihal Kainth\nCRN: 2415200\nURN: 2435101\n";
	return 0;
}
