#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = 1;

    for(int i=0; i<n; i++){
            if(i%2 == 0){ // 짝수번째
                for(int j=0; j<n; j++){
                    cout<<j+1;
                }
            }
            else{
                for(int j=0; j<n; j++){
                    cout<<n-j;
                }
            }
        cout<<endl;
    }
    return 0;
}