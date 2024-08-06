#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string result;

    for(int i=0; i<n; i++){
        string A;
        cin>>A;
        result += A;
    }

    cout<<result;
    return 0;
}