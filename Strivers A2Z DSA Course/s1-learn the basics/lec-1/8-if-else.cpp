//input age to say if adult or minor

#include<bits/stdc++.h>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=18){
        cout << "you are an adult";
    }
    else if(age<18 && age>0){
        cout << "you are a minor";
    }
    else{
        cout << "invalid age";
    }

    return 0;

}

// Enter your age: 10
// you are a minor
// PS D:\code\Leet-Code> 