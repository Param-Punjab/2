// Design and Implement a program to check if a given number is Palindrome or not using stack.

#include <iostream>
using namespace std;


class stack {
    public:
    int arr[10];
    void push(int x) {

    }
};

bool checker(stack arr[], int arr2[], int n, int middle = 0, ) {
    for (int i = 1; i <= n; i++) {
        if ( middle != 0 && i == middle ) { continue; }
        else if (i <= (n/2)) (
            arr.push(arr2[i]);
        ) else {
            if(arr.pop() != arr[i]) {
                return 0;
            }
        }
    }
    return 1;
}