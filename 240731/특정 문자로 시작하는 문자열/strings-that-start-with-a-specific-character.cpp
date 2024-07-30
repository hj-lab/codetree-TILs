#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    cout.precision(2);

    int n;
    cin>>n;
    string arr[n+1];
    char alphabet;
    int cnt = 0;
    double sum = 0;

    for(int i=0; i<n+1; i++){
        if(i != n){
            cin>>arr[i];
        }
        else{
            cin>>alphabet;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i][0] == alphabet){
            cnt++;
            sum += arr[i].length();
        }
    }

    cout<<cnt<<" "<<(sum/cnt);
    return 0;
}