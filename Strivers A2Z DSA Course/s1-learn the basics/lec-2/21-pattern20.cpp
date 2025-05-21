/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/


#include<bits/stdc++.h>
using namespace std;

void print (int n){
    // Upper half of the pattern
    for(int i=0; i<n; i++) {
        // First set of stars (left side)
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        // Spaces
        for(int j=1; j<=2*i; j++) {
            cout<<" ";
        }
        // Second set of stars (right side)
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    // Lower half of the pattern (mirrored)
    for(int i=n-1; i>=0; i--) {
        // First set of stars (left side)
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        // Spaces
        for(int j=1; j<=2*i; j++) {
            cout<<" ";
        }
        // Second set of stars (right side)
        for(int j=1; j<=n-i; j++) {
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
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// PS D:\code\Leet-Code> 