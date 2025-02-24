#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int *arr,int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i =0;i<n;i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cout << "Enter the size of the Array"<< endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Maximum Subarray Sum is : " << maxSubarraySum(arr,n);

}