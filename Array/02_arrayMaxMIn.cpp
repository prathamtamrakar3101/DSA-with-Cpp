#include <iostream>
using namespace std;

int maximun(int arr[],int n){
    int max=arr[0];
    int min= arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout <<"Maximun number of the array is : " <<  max << endl;
    cout <<"Minimun number of the array is : " <<  min << endl;

}

int main(){

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maximun(arr,n);
    return 0;
}
