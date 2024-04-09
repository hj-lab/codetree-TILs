#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = 0;

    while(true){
        if(n>=1000){
            cout<<cnt;
            break;
        }

        if(n%2 == 0){
            n = n*3+1;
        }
        else{
            n = n*2+2;
        }

        cnt++;
    }
    return 0;
}