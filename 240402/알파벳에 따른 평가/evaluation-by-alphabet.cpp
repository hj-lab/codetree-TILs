#include <iostream>
using namespace std;
int main() {
    char a;
    cin>>a;

    string result;
    if(a == 'S'){
        result = "Superior";
    }
    else if(a == 'A'){
        result = "Excellent";
    }
    else if(a == 'B'){
        result = "Good";
    }
    else if(a == 'C'){
        result = "Usually";
    }
    else if(a == 'D'){
        result = "Effort";
    }
    else{
        result = "Failure";
    }

    cout<<result;
    return 0;
}