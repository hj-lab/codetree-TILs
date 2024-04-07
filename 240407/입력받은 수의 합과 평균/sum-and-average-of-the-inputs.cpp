#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    int n;
    cin>>n;

    int sum = 0;
    double average;

    for(int i=1; i<n+1; i++){
        int number;
        cin>>number;

        sum += number;
    }
    cout.precision(1);
    average = (double)sum/n;
    cout<<sum<<" "<<average;
    return 0;
}