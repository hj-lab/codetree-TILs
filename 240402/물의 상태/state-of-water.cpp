#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;

    string result;
    if(a<0){
        result = "ice";
    }
    else if(a>=100){
        result = "vapor";
    }
    else{
        result = "water";
    }

    cout<<result<<endl;
    return 0;
}