// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a,b;
  
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    
    char op;
    cout<<"enter the Operation you want to perform"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b)<<endl; break;
        
        case '-': cout<<(a-b)<<endl; break;
        
        case '*': cout<<(a*b)<<endl; break;
        
        case '/': cout<<(a/b)<<endl; break;
        
        default: cout<<"Enter the valid operation"<<endl;
    }

    return 0;
}