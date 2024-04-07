#include <iostream>
using namespace std;
int main() {
    int prod = 1;
    int a,b;
    cin>>a>>b;

    for(int i=a; i<b+1; i++){
        prod *= i;
    }
    
    cout<<prod;
    return 0;
}