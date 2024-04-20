#include <iostream>
using namespace std;
int main() {
    int arr[10] = {};
    for(int i=0; i<10; i++){
        cin>>arr[i];

        if(arr[i] == 0){
            break;
        }
    }

    for(int i=(sizeof(arr)/sizeof(*arr)); i>=0; i--){
        if(arr[i] > 0 && arr[i] <= 100){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}