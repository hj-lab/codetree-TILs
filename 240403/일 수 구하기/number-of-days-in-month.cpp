#include <iostream>
using namespace std;
int main() {
    int month;
    cin>>month;

    if(month%2 == 1){
        cout<<"31";
    }
    else{
        if(month==2){
            cout<<"28";
        }
        else{
            cout<<"30";
        }
    }
    return 0;
}