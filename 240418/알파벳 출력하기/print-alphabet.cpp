#include <iostream>
using namespace std;
int main() {
    int n;
    int ascii = 65;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(char)ascii;
            ascii++;
            if((char)ascii == 'Z'){
                    ascii = 65;
            }
        }
        cout<<endl;
    }
    return 0;
}