// Online C++ compiler to run C++ program online
#include <iostream>
//#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        return 0;
    }
    while(m!=0){
        mask = (mask << 1) | 1;
        m= m >> 1;
        
    }
    int ans;
    ans = (~n) & mask;
    cout<<ans;
    
    return 0;
}