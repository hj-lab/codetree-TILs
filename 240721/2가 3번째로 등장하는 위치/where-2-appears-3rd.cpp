#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    int arr[number];
    int cnt = 0;

    for(int i=0; i<number; i++){
        cin>>arr[i];

        if(arr[i] == 2){
            cnt++;
            if(cnt == 3){
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}