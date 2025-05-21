/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/


#include<bits/stdc++.h>
using namespace std;

void print(int n){
    //upper half of the pattern
    for(int i=1;i<=n;i++){
        //left side stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //right side stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    n--;

    //lower half of the pattern
    for(int i=n;i>=1;i--){
        //left side stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(n-i+1);j++){  // Modified formula to match the pattern
            cout<<" ";
        }
        //right side stars
        for(int j=1;j<=i;j++){
            cout<<"*";
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
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// PS D:\code\Leet-Code> 