#include <iostream>
using namespace std;
int main()
{
    // int mark[50];
    // for(int i=0;i<50;i++){
    //     cout << mark[i] << endl; // stored garbage data
    // }
    // cout << mark[1000] << endl;

    // int marks[50]= {1,2,3,4,5,6,7,8,9,10}; // 0 to 9 rest all values are 0
    // cout << sizeof(marks) << endl; // 200 = 50*4
    // cout << marks[10] << endl; // 0
    // cout << marks[4] << endl; // garbage value

    // int numArray[5] = {1,2,3,4,5};
    // cout << numArray[5] << endl; // Garbage value
    // cout << sizeof(numArray)<< endl; // 20 = 5*4
    // cout << sizeof(numArray)/sizeof(int); // 5

    // Memory is statically allocated (at compile time)

    // char ch[3] = {'P','R','K'};
    // for(int i=0;i<50;i++){
    //     cout << ch[i] << endl; // stored garbage data
    // }

    // int arr[5]= {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // // cout << n << endl; // 5
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int n;
    cout << "Enter the size of the Array" << endl;
    cin >> n;
    int array[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
       cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }



    return 0;
}