#include <iostream>
using namespace std;
int main() {
    int n;
    int ascii = 65;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)ascii;
            ascii++;
        }
        cout<<endl;
    }
    return 0;
}