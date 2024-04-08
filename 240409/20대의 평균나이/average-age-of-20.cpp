#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    int sum = 0;
    int cnt = 0;
    while(true){
        int age;
        cin>>age;

        if(age>29){
            cout.precision(2);
            cout<<(double)sum/cnt;
            break;
        }

        sum += age;
        cnt++;

    }
    return 0;
}