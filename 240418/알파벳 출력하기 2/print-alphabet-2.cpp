#include <iostream>
using namespace std;
int main() {
    int n;
    int ascii = 65;
    cin>>n;

    for(int i=n; i>0; i--){
        for(int k=0; k<n-i; k++){
            cout<<"  ";
        }

        for(int j=0; j<i; j++){
            if((char)ascii == 'Z'){
                cout<<(char)ascii<<" ";
                ascii = 65;
            }
            else{
                cout<<(char)ascii<<" ";
                ascii++ ;
            }
        }

        cout<<endl;
    }
    return 0;
}