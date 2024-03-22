#include <iostream>
using namespace std;
int main() {
    cout<<fixed;

    int weight = 13;
    double gravity = 0.165;
    double moonWeight = weight * gravity;
    cout.precision(6);
    cout<<weight<<" * "<<gravity<<" = "<<moonWeight<<endl; 
    return 0;
}