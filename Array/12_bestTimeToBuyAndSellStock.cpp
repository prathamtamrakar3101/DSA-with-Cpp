#include <iostream>
#include <climits>
using namespace std;

// Brute Force
int buyAndSellStock(int *prices,int n){
    int profit = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int currProfit = 0;
            currProfit = prices[j] - prices[i];
            profit = max(currProfit,profit);
        }
    }
    return profit;
}

//Optimized
int maxProfit(int *prices,int n){
    int maxProfit = 0;
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    }
    for(int i=1;i<n;i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(currProfit,maxProfit);
    }
    return maxProfit;

}

int main(){
    int n;
    cout << "Enter the size of the Array"<< endl;
    cin >> n;
    int prices[n];
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<n;i++){
        cin >> prices[i];
    }
    cout << "Maximun profit is: " << buyAndSellStock(prices,n);
    cout << endl;
    cout << "Maximun profit is: " << maxProfit(prices,n);

   

}