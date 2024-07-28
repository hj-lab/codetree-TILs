#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n+1][n+1] = {};

    for(int i=0; i<m; i++){
        int first, second;
        cin>>first>>second;

        arr[first][second] = first * second;
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
    
    return 0;
}