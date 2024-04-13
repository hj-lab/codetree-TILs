#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    // i = 0 1 2 / 공백 3 2 1 / 별 1 3 5 (n=3) 2(n+1)-1
    
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            cout<<"  ";
        }

        for(int j=0; j<2*i+1; j++){
            cout<<"* ";
        }

        cout<<"\n";
    }
    return 0;
}