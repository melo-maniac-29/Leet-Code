/*
E
D E
C D E
B C D E
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=1; i<=n; i++){
        char ch = 'A' + (n - i);  // Simpler formula: Start with character at position (n-i)
        //for each row
        for(int j=1; j<=i; j++){
            cout << ch << " ";
            ch++;  // Increment to get the next character
        }
        cout << endl;
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
// E 
// D E
// C D E
// B C D E
// A B C D E
// PS D:\code\Leet-Code> 