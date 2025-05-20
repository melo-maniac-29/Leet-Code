// required pattern:
//    *
//   * *
//  * * *
// * * * *

//logic:
//n-i-1 spaces-left
//2*i+1 stars
// 1 space between stars
//n-i-1 spaces-right

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }
        //stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<< "*";
        }
        //spaces-right
        for(int j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print(n);
}



// Enter the number of rows: 5
//     *    
//    ***
//   *****
//  *******
// *********
// PS D:\code\Leet-Code> 