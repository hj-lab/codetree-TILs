#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[n];
    int cnt = 0;
    int length = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i][0] == 'a'){
            cnt++;
        }
        length += arr[i].length();
    }
    cout<<length<<" "<<cnt;
    return 0;
}