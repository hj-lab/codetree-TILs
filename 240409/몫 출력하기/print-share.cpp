#include <iostream>
using namespace std;
int main() {
    int cnt = 0;
    while(cnt<3){
        int number;
        cin>>number;

        if(number%2 == 0){
            cout<<number/2<<endl;
        }


        cnt++;
    }
    return 0;
}