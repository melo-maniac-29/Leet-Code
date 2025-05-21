/*
1      1
12    21
123  321
12344321
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n){
    int space=2*(n-1);

    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //reverse numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print(n);
    return 0;
}


// Enter the number of rows: 6
// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321
// PS D:\code\Leet-Code> 