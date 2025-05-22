
// pairs:

// it is a collection of two elements
// it is a data structure that can hold two values

// eg:

#include<bits/stdc++.h>
using namespace std;

    void explainpair()
    {
        pair<int,int> p = {1,3};  // pair of integers 
        
        cout << p.first << " " << p.second << endl;  // 1 3
        
        pair<int, pair<int, int>> p1 = {1, {2, 3}}; // pair of integer and pair of integers

        cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;  // 1 2 3

        pair<int,int> arr[] = { {1, 2}, {3, 4}, {5, 6} };  // array of pairs

        cout << arr[0].first << " " << arr[0].second << endl;  // 1 2
        cout << arr[1].first << " " << arr[1].second << endl;  // 3 4
        cout << arr[2].first << " " << arr[2].second << endl;  // 5 6

    }

    int main()
    {
        explainpair();
        return 0;
    }



    // output:
    // 1 3
    // 1 2 3
    // 1 2
    // 3 4
    // 5 6
    // PS D:\code\Leet-Code> 