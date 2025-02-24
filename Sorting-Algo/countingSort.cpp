#include <iostream>
#include <climits>
using namespace std;

// use a frequency count of elements from min to max 

void countSort(int *arr,int n){
    int freq[1000] = {0};
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for(int i=0;i<n;i++){
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
        freq[arr[i]]++;
    }
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
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
    countSort(arr,n);
    cout << "Sorted Array : ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}