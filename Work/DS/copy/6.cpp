#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> arr, int s, int n){
	int m = arr[s];
	int loc = s;
	for(int i = s+1; i < n; i++){
		if (m > arr[i]){
			m = arr[i];
			loc = i;
		}
	}
	return loc;
}

int main(){
	vector<int> arr;
	int n, m;
	cout<<"Enter the size of array: \n";
	cin>>n;

	cout<<"Enter the elements of arrau: \n";
	for (int i = 0; i < n; i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	for (int i = 0; i < n-1; i++){
		m = min(arr, i, n);
		int temp = arr[i];
		arr[i] = arr[m];
		arr[m] = temp;
	}
	cout<<"Sorted Array: \n";
	for (int x: arr) cout<<x<<" ";
	cout<<endl;
	cout<<"\nNihal Kainth, CRN:2415200, URN: 2435101\n";
}
