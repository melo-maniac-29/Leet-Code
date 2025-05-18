#include<bits/stdc++.h>
using namespace std;

/*
functions are used to divide the code into smaller parts
this is done to make the code more readable and reusable
*/

//void functions are used to perform a task and do not return any value

void printHello(){//non-parameterized function
    cout << "Hello World" << endl;
}

void printName(string name){ //parameterized function
    cout << "My name is " << name << endl;
}

int main(){
    
    string name;
    cout << "Enter your name: ";
    cin >> name;

    printHello();
    printName(name);

    return 0;

}