#include <iostream>
using namespace std;
int main() {
    int middle,last;
    cin>>middle>>last;

    int money;

    if(middle>=90){
        if(last>=95){
            money = 100000;
        }
        else if(last>=90){
            money = 50000;
        }
    }
    else{
        money = 0;
    }

    cout<<money;

    return 0;
}