#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0;

    for(int i = 1 ; i < 101 ; i++){
        if(sum+i >= n){
            break;
        }
        sum += i;
    }
    cout<<sum;
    return 0;
}