#include <iostream>
using namespace std;
int main() {
    int year, month, day;
    char dot;
    cin>>year>>dot>>month>>dot>>day;

    dot = '-';
    cout<<month<<dot<<day<<dot<<year;
    return 0;
}