/*
pattern 12

1
01
101
0101
10101

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            start=1;
        }
        else
        {
            start=0;
        }

        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start; // toggle between 0 and 1
        }
        cout<< endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print(n);
}


// Enter the number of rows: 6
// 1
// 01
// 101
// 0101
// 10101
// 010101
// PS D:\code\Leet-Code> 