#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>=0; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}