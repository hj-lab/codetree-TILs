#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int arr_first[n][n] = {};
    int arr_second[n][n] = {};
    int mul_arr[n][n] = {};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr_first[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr_second[i][j];
        }
    }

     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mul_arr[i][j] = arr_first[i][j] * arr_second[i][j];

            cout<<mul_arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}