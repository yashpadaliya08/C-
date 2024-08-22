#include<iostream>
using namespace std;

int fib(int n){
     int a=0,b=1;
     int fibnum=0;
    for(int i = 0;i<=n;i++){
         fibnum=a+b;
        cout<<fibnum<<" ";
        a=b;
        b=fibnum;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}
