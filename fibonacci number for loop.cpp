//Fibonacci Series
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    
    int a=0;
    int b=1;
    cout<< a <<" "<< b << " ";
    for(int i=1;i<=n;i++){
        
        int fibnum=a+b;
        cout<<fibnum<< " ";
        a=b;
        b=fibnum;
    }
    
    return 0;
}

OUTPUT
0 1 1 2 3 5 8 13 21 34 55 89