#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    //홀수열은 1,2,3,4 / 짝수열은 4,3,2,1

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j%2 == 0){
                cout<<i+1;
            }
            else{
                cout<<n-i;
            }
        }
        cout<<endl;
    }
    return 0;
}