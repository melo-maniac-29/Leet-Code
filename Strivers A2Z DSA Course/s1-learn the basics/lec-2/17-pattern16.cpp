/*
A B C D E
A B C D
A B C
A B
A
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=n; i>=1; i--){  // Fixed: Changed i<=1 to i>=1
        char ch='A';
        //for each row
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
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
// A B C D E
// A B C D
// A B C
// A B
// A
// PS D:\code\Leet-Code>