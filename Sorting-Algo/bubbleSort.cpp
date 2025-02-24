#include <iostream>
using namespace std;

// Time Complexity - O(n^2)
// large elements come to end by swapping with adjacents

// void bubbleSort(int *arr,int n){
//     for(int i=n-2;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        cout << "Outer loop" << endl;
        for(int j=0;j<n-i-1;j++){
        cout << "Inner loop" << " ";
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // array is already sorted
            return;
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array" <<endl;
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Original Array: " << endl;;
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    bubbleSort(arr,n);
    cout << "Sorted Array : ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}