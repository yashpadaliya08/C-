// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int amount=0,twotho=0,fivehund=0,hund=0,fifty=0,twenty=0,ten=10,one=0;
    cout<<"enter amount"<<endl;
    cin>>amount;
    
    switch(true){
        
    case 1:
    twotho = amount/2000;
    amount-=twotho*2000;
    cout<<"2000 note numbers:"<<twotho<<endl;
    
    case 2:
    fivehund = amount/500;
    amount-=fivehund*500;
    cout<<"500 note numbers:"<<fivehund<<endl;
    
    case 3:
     hund=amount/100;
     amount-=hund  * 100;
      cout<<"100 note numbers:"<<hund<<endl;

    case 4:
    fifty=amount/50;
    amount-=fifty * 50;
    cout<<"50 note numbers:"<<fifty<<endl;
    
    case 5:
    twenty=amount/20;
    amount-=twenty*20;
     cout<<"20 note numbers:"<<twenty<<endl;

    case 6:
    ten = amount/10;
    amount-=ten*10;
     cout<<"10 note numbers:"<<ten<<endl;
    
    case 7:
    one = amount/1;
    amount-=one*1;
    cout<<"1 note numbers:"<<one<<endl;
    
  
    }
    return 0;
}
