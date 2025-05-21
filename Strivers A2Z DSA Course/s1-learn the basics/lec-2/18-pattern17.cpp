/*
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    
    char ch='A';

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << ch << " ";
        }    
        cout << endl;
        ch++;
    }
}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print(n);
    return 0;
}



// Enter the number of rows: 5
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// PS D:\code\Leet-Code> 