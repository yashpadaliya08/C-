// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(){
    int a, b;
    cin>> a >>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
   // cout<<ans;
    return ans;
}
int main() {
    
/*   int a,b;
   
   cin>>a>>b;
   */
  int answer= power();
  cout<<answer;
    return 0;
}