#include<bits/stdc++.h>
using namespace std;

int main(){

    string str ="Allen";

    int length = str.length(); // or str.size()

    cout << "Length of the string is: " << length << endl;

    cout << "first character is : " << str[0] << endl; // Accessing the first character

    cout << "last character is : " << str[length-1] << endl; // Accessing the last character

    str[0] = 'a'; // Changing the first character
    cout << "After changing first character: " << str << endl;

    return 0;
}