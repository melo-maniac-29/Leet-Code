/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
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


// Enter the number of rows: 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// PS D:\code\Leet-Code> 
