#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;

    cout<<fixed;
    cout.precision(0);
    cout<<a+b+c<<endl;
    cout<<(a+b+c)/3<<endl;
    return 0;
}