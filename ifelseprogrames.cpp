#include<iostream>
using namespace std;

int main(){
	int num;
	// simple if else odd or even program

	cout<< "the odd or even program"<<endl;
	cout<< "enter the number is odd or even"<<endl;
	cin>>num;
	cout<<"the number is :"<< num <<endl;	
	if(num%2==0){
	cout<<"the number is even" <<endl;
	}else{
	cout<<"the number is odd"<<endl;
	}

	//the number is nagtive , positive or zero;

	cout<<"the second program";
	if(num>0){
	cout<<"the number is positive" <<endl;
	}else if(num<0)
	{
	cout<<"the number is nagtive"<<endl;
	}else{
	cout << "the number is zero" <<endl;
	}
	
	//the prime number


/*	#include <iostream>  
using namespace std;  
int main()  
{  
  int i=0,n,m,flag=0;
  cout<<"enter the number ";
  cin>>n;
  m=n/2;
  for(i=2;i<=m;i++){
      if(n%i==0){
          cout<<"the number is not prime"<<endl;
          flag=1;
          break;
      }
      
  }
  if(flag==0){
      cout<<"the number is prime";
  }
  
  
  
  return 0;  
}  */
}

		//program of uppercase lowercase and numeric value

  char ch;
    cout<<"enter the charater";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"the charcter is in uppercase";
    }
    else if (ch >='a' && ch <='z'){
        cout<<"the charcter is in lowercase";
    }
    else if(ch >='1' && ch <='9'){
        cout<<"the number is numric";
    }
    else{
        cout<<"enter a vaild value";
    }

return 0;

}
