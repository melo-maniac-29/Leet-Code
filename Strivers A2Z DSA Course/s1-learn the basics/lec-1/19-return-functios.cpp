#include<bits/stdc++.h>
using namespace std;

/*take two numbers and print
print the sum of the two numbers
*/

int sum(int num1,int num2){ //return function - parameterized function
    int sum=num1+num2;//sum of two numbers
    return sum;//returning the sum   
}

int main(){
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result=sum(num1,num2);

    cout << "The sum of the two numbers is: " << result << endl;

    return 0;
}


// Enter two numbers: 4 5
// The sum of the two numbers is: 9
// PS D:\code\Leet-Code> 