#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    int sum_val = 0;
    int cnt = 0;
    double average;

    for(int i = 0; i < 10; i++){
        int number;
        cin>>number;

        if(number>=0 && number<=200){
            sum_val += number;
            cnt++;
        }
    }
    average = (double)sum_val/cnt;
    cout.precision(1);
    cout<<sum_val<<" "<<average<<endl;
    return 0;
}