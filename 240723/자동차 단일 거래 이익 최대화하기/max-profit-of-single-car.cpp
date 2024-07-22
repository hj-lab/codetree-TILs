#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> prices(n);

    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    // 제일 작은 가격에 사서 -> 제일 큰 가격에 판다
    int min_price = INT_MAX;
    int max_profit = 0;

    for(int i=0; i<n; i++){
        if(prices[i] < min_price){
            min_price = prices[i];
        }
        int profit = prices[i] - min_price;
        if(profit > max_profit){
            max_profit = profit;
        }
    }
    
    cout<<max_profit;
    return 0;
}