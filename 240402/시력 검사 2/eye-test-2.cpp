#include <iostream>
using namespace std;
int main() {
    double average;
    cin>>average;

    string result;

    if(average >= 1.0){
        result = "High";
    }
    else if(average >= 0.5){
        result = "Middle";
    }
    else{
        result = "Low";
    }

    cout<<result;
    return 0;
}