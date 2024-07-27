#include <iostream>
using namespace std;

int main() {
    // 마지막 열부터 채우는데 홀수열일 경우 - 위에서 아래 / 짝수열일 경우 - 아래에서 위
    int n;
    cin>>n;
    int arr[n][n];
    int number = 1;

    for(int i=n-1; i>=0; i--){
        if((n-i)%2 == 0){ // 홀수열일 경우
            for(int j=0; j<n; j++){
                arr[j][i] = number;
                number++;
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                arr[j][i] = number;
                number++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}