#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cin>>arr[0]>>arr[1];

    for(int i=0; i<10; i++){
        if(i!=0 && i!=1){
            arr[i] = arr[i-1] + 2*arr[i-2];
        }
        else if(i==0){
            cin>>arr[0];
        }
        else if(i==1){
            cin>>arr[1];
        }

        cout<<arr[i]<<" ";

    }
    return 0;
}