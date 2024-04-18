#include <iostream>
using namespace std;
int main() {
    int n;
    int ascii = 65;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((char)ascii == 'Z'){
                    cout<<(char)ascii;
                    ascii++;
                    ascii = 65;
            }
            else{
                cout<<(char)ascii;
                ascii++;
            }
        }
        cout<<endl;
    }
    return 0;
}