#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int last = 0;

    for(int i=0; i<100; i++){
        cin>>arr[i];

        if(arr[i] == 0){
            last = i;
            break;
        }
    }

    for(int i=0; i<last; i++){
        if(arr[i] % 2 == 1){ //홀수
            cout<<arr[i]+3<<" ";
        }
        else{
            cout<<arr[i]/2<<" ";
        }

    }
    return 0;
}