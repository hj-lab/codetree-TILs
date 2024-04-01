#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int result;

    result = (a<b) ? b : a;

    cout<<result<<endl;
    
    return 0;
}