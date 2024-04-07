#include <iostream>
using namespace std;
int main() {
    int prod = 1;
    int a,b;
    cin>>a>>b;

    for(int i=1; i<b+1; i++){
        if(i % a == 0){
            prod *= i;
        }
    }

    cout<<prod;
    return 0;
}