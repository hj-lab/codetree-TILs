#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    cout<<fixed;

    double c = double(a+b) / (a-b);

    cout.precision(2);
    cout<<c<<endl;
    return 0;
}