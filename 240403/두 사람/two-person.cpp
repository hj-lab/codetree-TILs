#include <iostream>
using namespace std;
int main() {
    int firstAge, secondAge;
    char firstGender, secondGender;
    cin>>firstAge>>firstGender>>secondAge>>secondGender;

    if( (firstAge>=19 && firstGender=='M') || (secondAge>=19 && secondGender=='M') ){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}