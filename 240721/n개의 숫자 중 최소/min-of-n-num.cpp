#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int min_val = INT_MAX;
    int cnt = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < min_val){
            min_val = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] == min_val){
            cnt++;
        }
    }

    cout<<min_val<<" "<<cnt;
    return 0;
}