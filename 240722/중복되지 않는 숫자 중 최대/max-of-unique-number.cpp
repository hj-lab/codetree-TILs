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

        if(arr[i] >= max){
            if(arr[i] == max){
                max = second_max;
            }
            second_max = max;
            max = arr[i];
          
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