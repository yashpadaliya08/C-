// Online C++ compiler to run C++ program online

//revers integer 
//and the interger not more than 32 bit and if then return 0;



#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        if((ans > INT_MAX/10)||(ans < INT_MIN/10)){
          return 0;
        }
        ans= (ans * 10)+digit;
        n=n/10;
    }
    cout<<ans;
       return 0;
}