#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5];

    cout<< "enter 5 numbers :";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    for(int j=0; j<5; j++)
    {
        cout<< "the " << j+1 << " number is : " << arr[j] << endl;
    }

    return 0;

}


// enter 5 numbers :2 5 8 8 6
// the 1 number is : 2
// the 2 number is : 5
// the 3 number is : 8
// the 4 number is : 8
// the 5 number is : 6