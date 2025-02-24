#include <iostream>
#include <climits>
using namespace std;

// Sort this array of character using insertion sort in decending order
// char ch[]={'f','b','a','e','c','d'}

void insertionSort(char *arr,int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    char ch[6]={'f','b','a','e','c','d'};
    cout << "Original Array: ";
    for(int i =0;i<6;i++){
        cout << ch[i] << " ";
    }
    cout << endl;
    insertionSort(ch,6);
    cout << "Sorted Array : ";
    for(int i =0;i<6;i++){
        cout << ch[i] << " ";
    }
    return 0;
}