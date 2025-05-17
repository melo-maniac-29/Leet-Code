#include<bits/stdc++.h>
using namespace std;

/*a school has following rules for grading system
- 90-100 : A+
- 80-89 : A
- 70-79 : B
- 60-69 : C
- 50-59 : D
- <50 : F
ask user to enter marks and print the corresponding grade
*/
int main(){

    int marks;

    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>=90 && marks<=100){
        cout << "your grade is - A+";
    }
    else if(marks>=80 && marks<90){
        cout << "your grade is - A";
    }
    else if(marks>=70 && marks<80){
        cout << "your grade is - B";
    }
    else if(marks>=60 && marks<70){
        cout << "your grade is - C";
    }
    else if(marks>=50 && marks<60){
        cout << "your grade is - D";
    }
    else if(marks<50 && marks>0){
        cout << "your grade is - F";
    }
    else{
        cout << "invalid marks";
    }

}

// Enter your marks: 90
// your grade is - A+
// PS D:\code\Leet-Code> 