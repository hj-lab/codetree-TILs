#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a = 1;
    int cnt = 0;

    while(true){
        if(n == a){
            cout<<cnt;
            break;
        }

        a *= 2;
        cnt++;
    }
    return 0;
}