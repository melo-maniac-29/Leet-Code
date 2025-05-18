#include<bits/stdc++.h>
using namespace std;

/*
take an input a number and print the day of the week
if number is 1, print "Monday"
likewise for other days
if number is greater than 7, print "invalid day"
*/

int main(){

    int day;
    cout<< "enter a no to check the day of the week :";
    cin>>day;

    switch(day)
    {
        case 1:
               cout<<"Monday";
               break;
        case 2:
               cout<<"Tuesday";
               break;
        case 3:
               cout<<"Wednesday";
               break;
        case 4:
               cout<<"Thursday";
               break;
        case 5:
               cout<<"Friday";
               break;
        case 6:
               cout<<"Saturday";
               break;
        case 7:
               cout<<"Sunday";
               break;
        default:
               cout<<"Invalid day";
               break;
    }

    return 0;

}


// enter a no to check the day of the week :3
// Wednesday
// PS D:\code\Leet-Code>