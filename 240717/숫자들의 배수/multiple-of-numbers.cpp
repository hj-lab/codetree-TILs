#include <iostream>
using namespace std;

int main() {
    int num;
    int stopCount = 0;
    cin>>num;
    int arr[100];

    for(int i=0; i<100; i++){
        arr[i] = (i+1)*4;
        cout<<arr[i]<<" ";

        if(arr[i] % 5 == 0){
            stopCount++;
        }

        if(stopCount == 2){
            break;
        }

    }
    return 0;
}