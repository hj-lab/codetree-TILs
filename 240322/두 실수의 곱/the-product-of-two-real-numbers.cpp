#include <iostream>
using namespace std;
int main() {
    cout<<fixed;

    double a = 5.26;
    double b = 8.27;

    double result = a * b;

    cout.precision(3);

    cout<<result<<endl;
    return 0;
}