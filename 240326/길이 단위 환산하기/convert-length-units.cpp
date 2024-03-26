#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    double n;
    cin>>n;

    cout.precision(1);
    cout<<n*30.48<<endl;
    return 0;
}