// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isPrime(int n){
    bool isprime =1;
    for (int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"not prime number";
            isprime = 0;
            break;
        }
    }
      if(isprime == 0){
           cout<<"not prime number";
           
       }else{
           cout<<"prime number ";
       }


}
int main() {
    
    int n;
    cin>>n;
    int ans;
    ans = isPrime(n);
    
    
   if(ans == 1){
        cout<<"is Prime number";
    }
}