#include<bits/stdc++.h>
using namespace std;

//passing by reference

void numprint(int &num1,int &num2){
    cout << "The numbers are: " << num1 << " and " << num2 << endl;
    //increasing the values
    num1++;
    num2++;
    cout << "The numbers after incrementing are: " << num1 << " and " << num2 << endl;
    //the original values are changed--see the main function output
    //this is because the values are passed by reference
}

int main(){
    int a=5,b=10;
    numprint(a,b);
    cout << "The original values are changed: " << a << " and " << b << endl;
    //the original values are changed
    //this is because the values are passed by reference
    //the values are not copied to the function
    //and the original values are changed
    return 0;
}


// The numbers are: 5 and 10
// The numbers after incrementing are: 6 and 11
// The original values are changed: 6 and 11
// PS D:\code\Leet-Code> 