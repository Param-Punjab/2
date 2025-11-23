#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){
    string postfix;
    cout<<"Enter a postfix expression: ";
    cin>>postfix;
    
    stack<int> s;
    
    for (char x: postfix){
        if (isdigit(x)) s.push(x-'0');
        else{
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            int res;
            
            switch(x){
                case '+': res = a+b; break;
                case '-': res = a-b; break;
                case '*': res = a*b; break;
                case '/':
                    if (b == 0){
                        cout<<"Error division by Zero!\n";
                        return 1;
                    }
                    res = a/b; break;
                case '%': res = a%b; break;
                case '^': res = pow(a, b); break;
                default: cout<<"Invalid Operation!\n"; return 1;
            }
            s.push(res);
        }
    }
    cout<<"Result of the Postfix Expression: "<<s.top()<<endl;
    cout<<"Name: Nihal Kainth\nURN: 2435101\nCRN: 2415200\n";
    return 0;
}
