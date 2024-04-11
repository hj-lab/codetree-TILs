#include <iostream>
using namespace std;
int main() {
    bool satisfied = true;

    for(int i=0; i<5; i++){
        int number;
        cin>>number;

        if(number % 3 != 0){
            satisfied = false;
        }
    }

    if(satisfied == true){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}