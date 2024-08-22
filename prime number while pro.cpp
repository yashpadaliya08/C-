//prime number programe

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int i=2;
	
	while(i<n){
		if(n%i==0){
			cout<<"not prime"<<i<<endl;
		}
		/*else{
			cout<<"prime"<<i<<endl;
		}*/
		i=i+1;

}
return 0;
}


//in for loop
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    bool isPrime =1;
    
    for (int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"not prime number";
            isPrime = 0;
            break;
        }
    }
       if(isPrime == 0){
           cout<<"not prime number";
           
       }else{
           cout<<"prime number ";
       }
    
    return 0;
}
