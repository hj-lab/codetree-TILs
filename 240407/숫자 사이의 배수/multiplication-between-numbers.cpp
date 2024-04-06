#include <iostream>
using namespace std;
int main() {
    cout<<fixed;

    int a,b;
    cin>>a>>b;

    int sum_val = 0;
    int cnt = 0;
    double average;

    for(int i=a; i<b+1; i++){
        if(i % 5 == 0 || i % 7 == 0){
            sum_val += i;
            cnt++;
        }
    }

    average = (double)sum_val/cnt;

    cout.precision(1);
    cout<<sum_val<<" "<<average;
    return 0;
}