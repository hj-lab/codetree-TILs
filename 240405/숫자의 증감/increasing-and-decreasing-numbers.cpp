#include <iostream>
using namespace std;
int main() {
    char c;
    int n;
    cin>>c>>n;

    if(c=='A'){
        for(int i=0; i<n; i++){
            cout<<i+1<<" ";
        }
    }
    else if(c=='D'){
        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
    }
    return 0;
}