#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    int max = 0;
    int second_max = 0;

    for(int i=0; i<N; i++){
        cin>>arr[i];

        if(arr[i] > max){
            second_max = max;
            max = arr[i];

            cout<<"second는 "<<second_max<<"max는 "<<max<<endl;
        }
        else if(arr[i] == max){
            max = second_max;
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