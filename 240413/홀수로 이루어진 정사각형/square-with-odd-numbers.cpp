#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<i*2 + j*2+11<<" ";
        }
        cout<<"\n";
    }
    return 0;
}