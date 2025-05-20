//problem 9

/*
*******
 *****
  ***
   * 
*/


#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    //outer loop for number of rows
    for(int i=0;i<n;i++)
    {
        //inner loop for number of spaces
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //inner loop for number of columns
        for(int j=0;j<2*(n-i)-1;j++)
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





// Enter the number of rows: 4
// *******
//  *****
//   ***
//    *
// PS D:\code\Leet-Code> 