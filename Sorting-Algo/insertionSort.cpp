#include <iostream>
#include <climits>
using namespace std;

// pick the element from unsorted part & place it correctly in sorted part

void insertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
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
    insertionSort(arr,n);
    cout << "Sorted Array : ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}