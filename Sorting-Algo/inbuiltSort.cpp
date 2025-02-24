#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[8] = {1,2,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    cout << "Original Array: " << endl;;
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

    // sort(arr,arr+n);
    // sort(arr+2,arr+5);
    sort(arr,arr+8,greater<int>());

    cout << "Sorted Array : ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}