/*
A
A B
A B C
A B C D
A B C D E
*/


#include<bits/stdc++.h>
using namespace std;

void print (int n){
    
    for(int i=1;i<=n;i++){
        char ch='A';
        //for each row
        for(int j=1;j<=i;j++){
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
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// PS D:\code\Leet-Code> 