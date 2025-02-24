#include <iostream>
using namespace std;
// Subarray is continuous part of an array
// arr[] = {1,2,3,4,5}
// 1,12,123,1234,12345
// 2,23,234,2345
// 3,34,345
// 4,45
// 5

// Subsequece is an subarray but it can be non-continuous but match order in the original in the array
// 135,234,..... etc.
int printSubarray(int *arr,int n){
    for(int i=0;i<n;i++){           // n times 
        for(int j=i;j<n;j++){       // n times
            for(int k=i;k<=j;k++){  // n times
                cout<< arr[k];
            }
            cout << ",";
        }
        cout << endl;
    }
}

// Time Complexity is O(n3)

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i =0;i<n;i++){
        cin >> arr[i] ;
    }
    printSubarray(arr,n);

    
    return 0;
}