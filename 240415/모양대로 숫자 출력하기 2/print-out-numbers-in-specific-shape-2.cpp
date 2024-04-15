#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt = 2;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cnt>9){
                cnt = 2;
            }

            cout<<cnt<<" ";
            cnt += 2;
        }
        cout<<endl;
    }
    return 0;
}