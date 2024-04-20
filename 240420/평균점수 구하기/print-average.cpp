#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    cout.precision(1);
    
    double score[8] = {};
    double sum = 0;
    double average = 0;

    for(int i=0; i<8; i++){
        cin>>score[i];

        sum += score[i];
    }

    average = sum / 8;

    cout<<average;
    return 0;
}