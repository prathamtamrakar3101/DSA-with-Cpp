#include <iostream>
using namespace std;
// Time complexity of binary search is O(log n)
int binarySearch(int *arr,int n,int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array in sorted form" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the number to be search" << endl;
    cin >> key;
    int result = binarySearch(arr,n,key);
    if(result==-1){
        cout << "Key is not found in the array";
    }else{
        cout << "Key is found at the index: " << result << endl;
    }
    return 0;
}