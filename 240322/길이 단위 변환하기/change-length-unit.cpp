#include <iostream>
using namespace std;
int main() {
    cout<<fixed;

    double ft = 30.48;
    double mi = 160934;

    double myft = 9.2;
    double mymi = 1.3;

    double convertftcm = myft * ft;
    double convertmicm = mymi * mi;

    cout.precision(1);
    cout<<myft<<"ft = "<<convertftcm<<"cm"<<endl;
    cout<<mymi<<"mi = "<<convertmicm<<"cm"<<endl;

    return 0;
}