#include <iostream>
using namespace std;
int linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout << "Element is present in the array" << endl;
            return i;
        }
    }
    cout << "Element is not present in the array"<< endl;
    return -1;
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the number to be find" << endl;
    cin >> key;
    cout << linearSearch(arr,n,key); 
    return 0;
}