//vectors:
// 1. Vectors are dynamic arrays that can grow and shrink in size.
// 2. They are part of the C++ Standard Template Library (STL).
// 3. Vectors are similar to arrays but provide more flexibility.
// 4. They can store elements of the same type and allow random access.

#include<bits/stdc++.h>
using namespace std;

void explainvector()
{
    vector<int> v;  

    v.push_back(1);  // add element to the end of the vector
    v.emplace_back(2);  // add element to the end of the vector

    //difference between push_back and emplace_back:
    // push_back creates a copy of the object and then adds it to the vector
    // emplace_back constructs the object in place, avoiding the copy
    // emplace_back is generally more efficient than push_back
    // emplace_back is used when you want to add an object to the vector


    vector<pair<int, int>> vec;  // vector of pairs

    vec.push_back({1, 2});  // add pair to the vector
    vec.emplace_back(3, 4);  // add pair to the vector
    

    vector<int> v1(5, 10);  // vector of size 5 with all elements initialized to 10
    // v1 = {10, 10, 10, 10, 10}

    vector<int> v2(5);  // vector of size 5 with all elements initialized to 0
    // v2 = {0, 0, 0, 0, 0}

    vector<int> v1(5, 10);  // vector of size 5 with all elements initialized to 10
    // v1 = {10, 10, 10, 10, 10}
    vector<int> v2(v1); //copy constructor
    // v2 = {10, 10, 10, 10, 10}

    vector<int> :: iterator it=v.begin(); // iterator to the beginning of the vector
    // it is a pointer that points to the first element of the vector
    // it is used to traverse the vector

    it++; // increment the iterator to point to the next element

    cout << *(it) << endl; // print the value of the element pointed by the iterator

    it=it+2; // increment the iterator to point to the next element
    cout << *(it) << endl; // print the value of the element pointed by the iterator

    vector <int> :: iterator it1=v.end(); // iterator to the end of the vector
    // it1 is a pointer that points to the last space of the vector
    //not the last element

    it1--; // decrement the iterator to point to the last element
    cout << *(it1) << endl; // print the value of the element pointed by the iterator

    vector<int>::reverse_iterator rit1 = v.rend(); // reverse end iterator points to the last space of the vector
    vector<int>::reverse_iterator rit2 = v.rbegin(); // reverse begin iterator points to the first element of the vector


    cout << v[0] << " " << v.at(0) << endl; // v[0] and v.at(0) both access the first element of the vector
    // v[0] is faster than v.at(0) because v.at(0) checks for out of bounds

    cout << v.back() << endl; // print the last element of the vector


    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " "; // print the value of the element pointed by the iterator
    }

    cout << endl;

    for(auto it=v.begin(); it!=v.end(); it++) // auto keyword automatically deduces the type of the iterator
    {
        cout << *it << " "; // print the value of the element pointed by the iterator
    }

   cout << endl;

    for(auto it : v) // range based for loop
    {
        cout << it << " "; // print the value of the element
    }

    cout << endl;

    v.erase(v.begin()); // erase the first element of the vector
    // v.erase(v.begin()+1); // erase the second element of the vector

    v.erase(v.begin(),v.end()); // erase all elements of the vector
    // v.clear(); // clear the vector


    //insert elements in the vector

    vector<int> v3(2,100); // vector of size 2 with all elements initialized to 100
    v3.insert(v3.begin(), 200); // insert 200 at the beginning of the vector
    // v3 = {200, 100, 100}
    v3.insert(v3.begin()+1,2,10); // insert 2 elements with value 10 at the second position
    // v3 = {200, 10, 10, 100, 100}


    vector<int>copy(2,50); // vector of size 2 with all elements initialized to 50
    v.insert(v3.begin(),copy.begin(),copy.end()); // insert elements of copy vector at the beginning of v3
    



}