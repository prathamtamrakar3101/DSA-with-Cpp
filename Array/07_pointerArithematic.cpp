#include <iostream>
using namespace std;
// Pointer Arithematic

int printArray(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr = ptr + 1;
        // cout << *(ptr + i) << " ";
    }
    
}
int main()
{
    // Increment and Decrement Operator
    // ptr++ or ++ptr
    // ptr-- or ptr--

    int arr[] = {10, 20, 30, 40, 50};
    int *aptr = arr;

    cout << aptr << " " << *aptr << endl;  // 0x61ff00 10

    aptr++; // Used to move a pointer to the next memory location based on the data type it points to.
    cout << aptr << " " << *aptr << endl;  // 0x61ff04 20 

    aptr--;
    cout << aptr << " " << *aptr << endl;  // 0x61ff00 10

    //    cout << arr << endl;
    //    cout << arr++ << endl; // we can't modified array pointer

    // Addition and substraction of constants
    // ptr + 3
    // ptr - 3

    // ptr + n = Address(ptr) + (n * size_of_data_type)
    // ptr - n = Address(ptr) - (n * size_of_data_type)

    aptr = aptr + 2;
    cout << aptr << " " << *aptr << endl;  // 0x61ff08 30

    aptr = aptr - 2;
    cout << aptr << " " << *aptr << endl;  // 0x61ff00 10

    int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);
    cout << endl;
    // ptr1 + ptr2 // invalid
    // ptr1 - ptr2 // valid and both should be same type

    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout << ptr1 << " " << *ptr1 << endl; // 0x61feec 10
    cout << ptr2 << " " << *ptr2 << endl; // 0x61fef8 40

    cout << ptr2 - ptr1 << endl; // 3

    // Comparison(==, >, <, <=, >=)

    cout << (ptr1==ptr2) << endl; // 0
    cout << (ptr1<ptr2) << endl; // 1
    cout << (ptr1>ptr2) << endl; // 0 
    cout << (ptr1<=ptr2) << endl; // 1
    cout << (ptr1>=ptr2) << endl; // 0

    return 0;
}