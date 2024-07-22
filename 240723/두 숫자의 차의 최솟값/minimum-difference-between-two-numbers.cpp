#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int first, second;
    int min = 101;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int gap = arr[i]-arr[i-1];
        if(gap < min){
            min = gap;
        }
    }

    cout<<min;
    return 0;
}