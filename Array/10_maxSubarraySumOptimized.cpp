#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySumOptimized(int *arr,int n){
    int sum = INT_MIN;
    for(int i =0;i<n;i++){
        int currSum =0;
        for(int j=i;j<n;j++){
            currSum += arr[j];
            sum = max(sum,currSum);
            cout << currSum << "," ;
        }
        cout << "(" << sum << ")" << endl;
    }
    return sum;
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
    cout << "Maximum Subarray Sum is : " << maxSubarraySumOptimized(arr,n);

}