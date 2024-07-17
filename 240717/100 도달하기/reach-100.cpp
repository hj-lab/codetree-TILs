#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[50];
    cin>>num;

    for(int i=0; i<50; i++){
        if(i!=0 && i!=1){
        arr[i] = arr[i-1]+arr[i-2];
        }
        else if(i==0){
            arr[i] = 1;
        }
        else if(i==1){
            arr[i] = num;
        }

        cout<<arr[i]<<" ";

        if(arr[i] >= 100){
            break;
        }
    }
    
    return 0;
}