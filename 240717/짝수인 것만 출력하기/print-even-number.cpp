#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int evenarr[n];
    int evencount = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            evenarr[evencount] = arr[i];
            evencount++;
        }

    }

    for(int i=0; i<evencount; i++){
        cout<<evenarr[i]<<" ";
    }

    
    return 0;
}