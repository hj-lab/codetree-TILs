#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int sum = 0;

    for(int i=0; i<10; i++){
        int a;
        cin>>a;
        
        arr[i] = a;

    }

    sum += arr[2];
    sum += arr[4];
    sum += arr[9];

    cout<<sum;

    return 0;
}