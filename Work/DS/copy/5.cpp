#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> arr;
	int size;
	cout<<"Enter the size of the array: \n";
	cin>>size;
	
	cout<<"Enter the elements of array: \n";
	for (int i = 0; i < size; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}

	//Bubble sorting
	for (int i = 0; i < size-1; i++){
		for(int k = 0; k < size-i-1; k++){
			if (arr[k] > arr[k+1]){
				int temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
	cout<<"Sorted Array: \n";
	for (int x: arr) cout<<x<<" ";
	cout<<"\nName: Nihal Kainth, CRN: 2415200, URN: 2435101\n";
	return 0;
}

			
