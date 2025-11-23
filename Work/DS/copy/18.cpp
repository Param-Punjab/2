#include <iostream>
using namespace std;

void hanoi(int n, char source, char dest, char help){
    if (n == 1){
        cout<<"Disk 1 moved from "<<source<<" to "<<dest<<endl;
        return;
    }
    hanoi(n-1, source, help, dest);

    cout<<"Disk "<<n<<" moved from "<<source<<" to "<<dest<<endl;

    hanoi(n-1, help, dest, source);
}

int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    cout<<"Sequence of moves to solve TOWER of HANOI for "<<n<<" disks->\n";
    hanoi(n, 'A', 'C', 'B');
    cout<<"Name: Nihal Kainth\nURN: 2435101\n";
}
