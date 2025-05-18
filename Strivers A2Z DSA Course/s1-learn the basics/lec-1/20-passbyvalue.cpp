#include<bits/stdc++.h>
using namespace std;

//pass by value

void numprint(int num1,int num2){
    cout << "The numbers are: " << num1 << " and " << num2 << endl;
    //increasing the values
    num1++;
    num2++;
    cout << "The numbers after incrementing are: " << num1 << " and " << num2 << endl;
    //the original values are not changed--see the main function output
    //this is because the values are passed by value
}

int main(){
    int a=5,b=10;
    numprint(a,b);
    cout << "The original values are not changed: " << a << " and " << b << endl;
    //the original values are not changed
    //this is because the values are passed by value
    //the values are copied to the function
    //and the original values are not changed
    return 0;
}