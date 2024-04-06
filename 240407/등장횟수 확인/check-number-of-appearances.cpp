#include <iostream>
using namespace std;
int main() {
    int cnt = 0;

    for(int i=0; i<5; i++){
        int number;
        cin>>number;

        if(number % 2 == 0){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}