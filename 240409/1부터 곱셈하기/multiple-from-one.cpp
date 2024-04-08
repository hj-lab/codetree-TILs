#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int result = 1;
    for(int i=1; i<11; i++){
        result *= i;

        if(result >= n){
            cout<<i;
            break;
        }
    }
    return 0;
}