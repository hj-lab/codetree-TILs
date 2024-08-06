#include <iostream>
using namespace std;

int main() {
    string A,B, AB, BA;
    cin>>A>>B;
    AB = A+B;
    BA = B+A;

    if(AB == BA){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}