#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int evenSum = 0;
    int oddSum = 0;

    for(int i=0; i<10; i++){
        int number;
        cin>>number;
        arr[i] = number;

        if(i%2 == 0){ //홀수번째
            oddSum += arr[i];
        }
        else{
            evenSum += arr[i];
        }
    }

    if(oddSum>evenSum){
        cout<<oddSum-evenSum;
    }
    else{
        cout<<evenSum-oddSum;
    }

    return 0;
}