#include <iostream>
using namespace std;

// Array pointer act like as constant pointer if we want to change this value we can't do it ; 

void printArr(int arr[], int n)
{
    // cout << sizeof(arr); // it will return the size of pointer which is 8 in 64 bit 
    // int size = sizeof(arr)/sizeof(int); // 1

    // arr[] and *arr
    // its differnent in the terms of syntax but its same
    // they are interpreted as pointer to the first element of the array when passed to a function

    arr[0]=1000;
}

int main()
{
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl; // 0x61ff08
    // cout << *ptr << endl; // 5
    // cout << &a << endl; // 0x61ff08

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // array name -> pointer in C++
    cout << arr << endl;        // 0x61fef8
    cout << *arr << endl;       // arr[0]
    cout << *(arr + 1) << endl; // arr[1]
    cout << *(arr + 2) << endl; // arr[2]
    printArr(arr, n);

    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    // 1000 2 3 4 5

    return 0;
}