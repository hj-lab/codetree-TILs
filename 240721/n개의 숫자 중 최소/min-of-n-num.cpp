#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int min_val = 100;
    int cnt = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < min_val){
            min_val = arr[i];
            cnt++;
        }
    }

    cout<<min_val<<" "<<cnt;
    return 0;
}