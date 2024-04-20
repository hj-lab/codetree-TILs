#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    cout.precision(1);

    int arr[10] = {};
    int cnt = 0;
    int sum = 0;
    double average = 0;

    for(int i=0; i<10; i++){
        cin>>arr[i];
        if(arr[i] == 0){
            break;
        }
        cnt++;

        sum += arr[i];
    }

    average = (double)sum / cnt;

    cout<<sum<<" "<<average<<endl;
    return 0;
}