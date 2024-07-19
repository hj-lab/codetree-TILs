#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;

    int arr[number];
    int count_arr[10] = {0};

    for(int i=0; i<number; i++){
        cin>>arr[i];
        count_arr[arr[i]]++;
    }

    for(int i=1; i<10; i++){
        cout<<count_arr[i]<<endl;
    }

    return 0;
}