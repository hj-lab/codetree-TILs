#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = n;
    int cnt = 0;
    for(int i=1; i<n+1; i++){
        result /= i;
        cnt++;

        if(result <= 1){
            cout<<cnt;
            break;
        }
    }
    return 0;
}