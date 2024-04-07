#include <iostream>
using namespace std;
int main() {
    int prod = 1;
    int a,b;
    cin>>a>>b;

    for(int i=0; i<b; i++){
        prod *= a;
    }

    cout<<prod;
    return 0;
}