#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    int max = 0;

    for(int i=0; i<N; i++){
        cin>>arr[i];

        if(arr[i] > max && arr[i] != max){
            max = arr[i];
            cout<<"max는 "<<max<<endl;
        }
    }

    if(max != 0){
        cout<<max;
    }
    else{
        cout<<-1;
    }

    return 0;
}