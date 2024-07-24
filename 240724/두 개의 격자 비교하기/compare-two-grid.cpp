#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr_first[n][m] = {};
    int arr_second[n][m] = {};
    int is_same[n][m] = {};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr_first[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr_second[i][j];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr_first[i][j] == arr_second[i][j]){
                is_same[i][j] = 0;
            }
            else{
                is_same[i][j] = 1;
            }

            cout<<is_same[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}