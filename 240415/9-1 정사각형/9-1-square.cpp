#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt = 9;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cnt < 1){
                cnt = 9;
            }
            cout<<cnt;
            cnt--;
        }
        cout<<endl;
    }
    return 0;
}