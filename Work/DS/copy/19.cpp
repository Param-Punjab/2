#include <iostream>
using namespace std;

void qs(int a[], int l, int r){
    if(l<r){
        int p=a[r], i=l-1;
        for(int j=l;j<r;j++) if(a[j]<p) swap(a[++i],a[j]);
        swap(a[i+1],a[r]);
        qs(a,l,i); qs(a,i+2,r);
    }
}

int main(){
    int n; 
    cout << "Enter number of elements: "; cin>>n;
    int a[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin>>a[i];

    qs(a,0,n-1);

    cout << "Sorted array: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout << endl;
    cout<<"Name: Nihal Kainth\nURN: 2435101\n";
}
