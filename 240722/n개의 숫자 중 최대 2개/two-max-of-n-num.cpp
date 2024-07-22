#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    int max_first = INT_MIN;
    int max_second = INT_MIN;

    for(int i=0; i<N; i++){
        cin>>arr[i];

        if(arr[i] > max_first && max_second > arr[i]){
            max_first = arr[i];
        }
        else if(arr[i] > max_second && arr[i] <= max_first){
            max_second = arr[i];
        }
    }

    cout<<max_first<<" "<<max_second;

    return 0;
}