#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    cout.precision(1);

    int arr[10] = {};
    int sum = 0;
    int cnt = 0;
    double average = 0;

    for(int i=0; i<10; i++){
        cin>>arr[i];

        if(arr[i] >= 250){
            break;
        }

        sum += arr[i];
        cnt++;
        average = (double)sum/cnt; 

    }

    cout<<sum<<" "<<average;
    return 0;
}