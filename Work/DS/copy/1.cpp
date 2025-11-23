#include <iostream>
#include <array>
using namespace std;

int main(){
	int row, col;
	cout<<"Enter the number of rows of matrix: ";
	cin>>row;

	cout<<"Enter the number of columns of matrix: ";
	cin>>col;

	int arr1[row][col], arr2[row][col];

	cout<<"Enter the elements of matrix 1: "<<endl;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cin>>arr1[i][j];
		}}

	cout<<"\nMatrix 1: \n";
	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Enter the elements of matrix 2: "<<endl;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cin>>arr2[i][j];
		}}

	cout<<"\nMatrix 2: "<<endl;
	for (int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}

	int arr3[row][col];

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			arr3[i][j] = arr1[i][j]+arr2[i][j];
		}
	}

	cout<<"\nAddition of both matrices is: "<<endl;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Name: Nihal Kainth\nCRN: 2415200\nURN: 2435101\n";
	return 0;
}
