#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
        cout<<"\n";
    }

    for(int i=n; i>0; i--){
        for(int j=i-1; j>0 ;j--){
            cout<<"*";
        }
        cout<<"\n";
        cout<<"\n";

    }
    return 0;
}