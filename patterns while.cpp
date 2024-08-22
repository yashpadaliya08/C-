    int n;
	cin>>n;
	
	int i = 1;
	
	while(i<=n){
	    int j=1;
	    while(j<=n){
	        cout<<"*";
	        j=j+1;
	    }
	    cout<<endl;
	    i=i+1;
	}

OUTPUT-
3	
***	
***	
***


3 // in print i
111
222
333

3 //print j
123
123
123	

3 // print n-j+1
321
321
321

3 // take extra varibal count=0 and print count 
123
456
789


---------------------------------------------------------------------------------
// star pattern

//prime number programe

#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
//	int count=1;
		while(row<=n){
	    int col=1;
	    while(col<=row){
	        cout<<"*";
	      col=col+1;
	    }
	    cout<<endl;
	    row=row+1;
	}
return 0;
}

OUTPUT

4
*
**
***
****

3  //print row // this program print the rows number 
1
22
333

3 // take extra varibal count=0 and print count
1
23
456

------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
   
		while(row<=n){
	    int col=1;
	     int value=row;
	    while(col<=row){
	        cout<<value;
	        value=value+1;
	        col =col +1;
	        
	    }
	    cout<<endl;
	    row=row+1;
	}
return 0;
}

OUTPUT
4
1
23
345
4567


4 //cout<<i-j+1; //row-col+1;
1
21
321
4321

---------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row <= n){
        int col=1;
        while(col<= n){
            char ch = 'A' + row - 1;
            cout << ch; 
            col = col + 1;
        }
            cout<<endl;
            row = row + 1;
    }
    
    return 0;
}


OUTPUT

3
AAA
BBB
CCC

3  // ch = 'A' + col - 1;
ABC
ABC
ABC

3  // take var in upper side // char value = 'a'; loop{value = value + 1}
ABC
DEF
GHI

3 // char ch = 'A' + row + col -2;  //(2)first loop ch ='A' + row -1; and col<=n; ch =ch +1;
ABC
BCD
CDE

3 // char ch = 'A' + row -1;
A
BB
CCC

3 // take var count=row; //char ch ='A' +count-1; //count = count + 1;
A
BC
DEF

4 // char ch = 'A' + row + col - 2;
A
BC
CDE
DEFG

4  //take char = 'A' + n - row; in first loop //ch = ch+1;
D
CD
BCD
ABCD


---------------------------------------------------------------------------------

//PATTER OF STAR

#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
	int count = 1;
   
		while(row <= n){
		  
	    //space print
	    int space = n - row;
	  	    while(space){
	        cout<<" ";
	        space= space - 1;
	    }
	    	    //star print

	    int col =1;
	    while(col <= row){
	        cout<<"*"; //cout<<row; //print count
	        col = col + 1;
	    }
	    cout<<endl;
	    row = row + 1;
	    
	    
	}
return 0;
}

OUTPUT
4
   *
  **
 ***
****

4
    1
   22
  333
 4444

3 //count
   1
  23
 456

-----------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
   		while(row <= n){
	    int col =1;
	    while(col <= n-row+1){
	        cout<<"*";
	        col = col + 1;
	    }
	    cout<<endl;
	    row = row + 1;
	}
return 0;
}
4
****
***
**
*
------
4 //  int space = row - 1; //  while(col <= n-row +1)
****
 ***
  **
   *

4  // cout<<row;
1111
 222
  33
   4

3  // take var count and print
123
 45
  6

---------------------------------------------------------------------------------------------------------------------------------------

//PATTER OF STAR

#include<iostream>
using namespace std;

int main(){
    int n;
	cin>>n;
	int row = 1;
    while(row <= n){
        
        //Print 1st 
        int space = n- row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //print 2nd
        int j = 1;
        while(j <=  row){
            cout<<j;
            j = j+1;
        }
        
        //print 3rd
        int start = row -1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        
        cout<<endl;
        row = row + 1;
    }
	
return 0;
}

OUTPUT

4
   1
  121
 12321
1234321


------------------------------------------------------------------------------------------------------------------------------------------------------------#include <iostream>
using namespace std;
int main() {
    int n;
     cin>>n;
     
     int row = 1;
     
     while(row <= n){
         
         //frist
        int first= n -row  +1;
         int count=1;
         while(first){
             cout<<count;
             count++;
             first--;
         }
         //second
         int halftri= row -1;
         while(halftri){
             cout<<"*";
             halftri--;
         }
         
         //thrid
        int star2 = row - 1;
        while(star2){
            cout<<"*";
            star2--;
        }
        //fourth
        int last = n - row +1;
        while(last){
            cout<<last;
            last--;
        }
        cout<<endl;
        row = row + 1;
     }
    return 0;
}

OUTPUT
6
123456654321
12345**54321
1234****4321
123******321
12********21
1**********1
