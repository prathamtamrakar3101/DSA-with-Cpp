#include <iostream>
#include <climits>
using namespace std;
// Subarray is continuous part of an array
// Subsequece is an subarray but it can be non-continuous but match order in the original in the array
// 135,234,..... etc.

int maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)          // n times
    { 
        for (int j = i; j < n; j++)      // n times
        {
            int sum = 0;
            for (int k = i; k <= j; k++) // n times
            { 
                sum = sum + arr[k];
            }
            cout << sum;
            cout << ",";
            maxSum = max(sum, maxSum);
        }
        cout << "(" << maxSum << ")";
        cout << endl;
    }
    return maxSum;
}

// Time Complexity is O(n3)

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxSubarraySum(arr, n);

    return 0;
}