#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int sum_val = 0;

    for(int i=a; i<b+1; i++){
        if(i % 2 == 0){
            sum_val += i;
        }
    }

    cout<<sum_val;
    return 0;
}