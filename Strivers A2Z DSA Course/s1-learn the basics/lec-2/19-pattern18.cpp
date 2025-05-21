/*
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){

    //spaces
    //alphabets
    //reverse alphabets
    
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        //alphabets
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }

        //reverse alphabets
        ch--;
        for(int j=1;j<i;j++){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
        
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print(n);
    return 0;
}



// Enter the number of rows: 5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// PS D:\code\Leet-Code> 