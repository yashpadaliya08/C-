#include<iostream>
using namespace std;

int ap(int n){
    int ans=0;
    
    ans = 3 * n + 7;
    return ans;
}
int main(){
    int n;
    cin>>n;
    ap(n);
    cout<<"Answer is "<<ap(n)<<endl;
    return 0;
}
