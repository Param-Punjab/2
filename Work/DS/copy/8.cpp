#include <iostream>
using namespace std;
void merge(int A[], int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	
	for (int i = 0; i < n1; i++)
        L[i] = A[l + i];
	
	for (int j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while (i < n1)
        A[k++] = L[i++];
	while (j < n2)
        A[k++] = R[j++];
}
void mergeSort(int A[], int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;
		mergeSort(A, l, m);
		mergeSort(A, m + 1, r);
		merge(A, l, m, r);
	}
}
int main() {
	int n;
	cout<<"---MERGE SORT---\n";
	cout << "Enter the number of elements: \n";
	cin >> n;
	
	int A[n];
	cout << "Enter the elements: \n";
	for (int i = 0; i < n; i++) 
        cin >> A[i];
	
	mergeSort(A, 0, n - 1);
	
	cout<<"Sorted array:\n";
	for(int x:A) cout<<x<<" ";
    cout<<endl;
    cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
	return 0;
}
