//array will default pass by reference

#include<bits/stdc++.h>
using namespace std;

//pass by reference
void printArray(int arr[], int size){
    cout << "The array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //increasing the values
    for(int i=0; i<size; i++){
        arr[i]++;
    }
    
    cout << "The array after incrementing is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    cout << "The original array is: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //passing the array to the function
    printArray(arr,size);

    //the original array is changed
    //this is because the array is passed by reference
    cout << "The original array after incrementing in function - main looks like : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
