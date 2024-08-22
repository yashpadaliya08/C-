// Online C++ compiler to run C++ program online

sub of produc ans sum
with extration of number
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int prod=1;
  int sum=0;
  while(n!=0){
      int rem = n%10;
  
      prod = prod * rem;
      sum = sum + rem;
      n=n/10;
  }
  int answer = prod-sum;
  cout<<answer;
    return 0;
}