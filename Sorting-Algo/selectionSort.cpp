#include <iostream>
#include <climits>
using namespace std;

// pick the smallest (from unsorted) & put in the beginning

void selectionSort(int *arr,int n){
    for(int i =0;i<n-1;i++){
        int minidx = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
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
    selectionSort(arr,n);
    cout << "Sorted Array : ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}