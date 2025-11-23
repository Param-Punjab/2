#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> arr;
	cout<<"Enter the number of elements you want to enter: ";
	int size;
	cin>>size;
	
	cout<<"Enter elements of array: \n";
	for (int i = 0; i < size; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	
	int search;
	cout<<"Enter a number to search: "<<endl;
	cin>>search;

	cout<<"For efficiency we sorted your array.\n\n";
	sort(arr.begin(), arr.end());
	
	int low = 0, high = size - 1;
	bool found = false;

	while(low<=high){
		int mid = (high+low)/2;
		if (arr[mid] == search){
			cout<<"Found at Index: "<<mid<<endl;
			cout<<"Or Found at Position: "<<mid+1<<endl;
			found = true;
			break;
		}
		else if (search > arr[mid]){
			low = mid+1;
		}
		else if (search < arr[mid]){
			high = mid - 1;
		}
	}
	if (!found) cout<<"Element not found\n";
	cout<<"Name: Nihal Kainth\nCRN: 2415200\nURN: 2435101\n";
}
