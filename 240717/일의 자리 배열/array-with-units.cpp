#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    for(int i=0; i<10; i++){
        if(i==0 | i==1){
            cin>>arr[i];
        }
        else{
            arr[i] = (arr[i-1] + arr[i-2]) % 10;
        }

        cout<<arr[i]<<" ";
    }
    return 0;
}