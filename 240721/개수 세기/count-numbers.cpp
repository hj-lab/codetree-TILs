#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int arr[n];
    int count = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] == m){
            count++;
        }
    }

    cout<<count;
    return 0;
}