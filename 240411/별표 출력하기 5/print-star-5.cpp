#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            for(int k=i; k>=0; k--){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}