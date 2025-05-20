//pattern 11

/*

*
**
***
****
*****
****
***
**
*

*/


#include<bits/stdc++.h>
using namespace std;


void print(int n)
{
    for(int i=1;i<=2*n-1;i++) // 2*n-1 rows
    {
        int stars=i; // stars in ith row
        
        if(i>n) // for the second half
        {
            stars=2*n-i; // stars in ith row
        }
        
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }

      
        cout<<endl;
    }
}


int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print(n);
}


// Enter the number of rows: 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// PS D:\code\Leet-Code> 