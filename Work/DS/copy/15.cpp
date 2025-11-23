#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool palindrome(string w){
    stack<char> s1;
    for (char x: w) s1.push(x);

    for (char x: w){
        if (s1.top() != x)
            return false;
        s1.pop();
    }
    return true;
}

int main(){
    string num;
    cout<<"Enter a number/word: ";
    cin>>num;

    if(palindrome(num)) cout<<num<<" is a palindrome!\n";
    else cout<<num<<" is not a palindrome!\n";
    cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
    return 0;
}
