#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout<<"Enter the size of the array: ";
	int size;
	cin>>size;

	vector<int> arr(size);

	cout<<"Enter the elements of the array: \n";
	for (int i = 0; i < size; i++) cin>>arr[i];

	int temp, ptr;
	for (int i = 1; i < size; i++){
		temp = arr[i];
		ptr = i-1;

		while(ptr >= 0 && temp < arr[ptr]){
			arr[ptr+1] = arr[ptr];
			ptr--;
		}
		arr[ptr+1] = temp;
	}

	for (int x: arr) cout<<x<<" ";
	cout<<"\nNihal Kainth\nURN:2425101\nCRN:2415200\n";
	return 0;
}
