#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col;
            
        }
        count++;
        cout<<endl;
        
    }
return 0;
}

OUTPUT
6
1
12
123
1234
12345
123456

//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<row;
        }
        count++;
        cout<<endl;
    }
return 0;
}
OUTPUT
6
1
22
333
4444
55555
666666

//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<col;
        }
        count++;
        cout<<endl;
    }
return 0;
}
6 //col
123456
123456
123456
123456
123456
123456

6 //print var row
111111
222222
333333
444444
555555
666666

//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row-1;col++){
            cout<<col;
        }
        count++;
        cout<<endl;
    }
return 0;
}

OUTPUT
6
1234
123
12
1

//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row-1;col++){
            cout<<col;
        }
        count++;
        cout<<endl;
    }
return 0;
}

OUTPUT
6
1
12
123
1234
12345


//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int space=0;space<=n-row;space++){
            cout<<" ";
            
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
            
            }
          /*  for(int j=1;j<row;j++){
                cout<<"*";
            }*/
        count++;
        cout<<endl;
    }
return 0;
}
OUTPUT
6
      *
     **
    ***
   ****
  *****
 ******
-------------------------------------------------------------------------------
//PATTER OF STAR
#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
    for(int row=1;row<=n;row++){
        for(int space=0;space<=n-row;space++){
            cout<<" ";
            
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
            
            }
          for(int j=1;j<row;j++){
                cout<<"*";
            }
        count++;
        cout<<endl;
    }
return 0;
}
OUTPUT
6
      *
     ***
    *****
   *******
  *********
 ***********
------------------------------------------------------------------------------
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //cout<<"Hello World";
    int n;
    cin>>n;
    int row=1;
    for(row=1;row<=n;row++){
        int count=1;
        int num=n;
        for(int first=1;first<=n-row+1;first++){
            cout<<count;
            count++;
        }
        for(int halftra=1;halftra<=row-1;halftra++){
            cout<<"*";
        }
        for(int thrtra=1;thrtra<=row-1;thrtra++){
            cout<<"*";
        }
       for(int last=1;last<=n-row+1;last++){
            cout<<num;
            num--;
        } 
        cout<<endl;
    }

    return 0;
}
OUTPUT
6
123456654321
12345**65432
1234****6543
123******654
12********65
1**********6

