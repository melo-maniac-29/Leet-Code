#include<bits/stdc++.h>
using namespace std;

/*
input a number to check if user is eligible for job or not
if age is greater than or equal to 18 and less than or equal to 60
if yes, print "eligible for job"
if no, print "not eligible for job"
if age greater than 60, print "retired"
if less than 18, print "not eligible for job"
*/
int main(){
    int age;

    cout<<"Enter your age:";
    cin>>age;

    if(age>=18 && age<=60)
    {
        cout<<"eligible for job";
    }
    else if(age>60)
    {
        cout<<"retired";
    }
    else if(age<18 && age>0)
    {
        cout<<"not eligible for job";
    }
    else
    {
        cout<<"invalid age";
    }

    return 0;
}


// Enter your age:61
// retired
// PS D:\code\Leet-Code> 
