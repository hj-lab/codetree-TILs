#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int temp1;
    int temp2;

    temp1 = a;
    temp2 = b;

    b = temp1;
    a = c;
    c = temp2;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}