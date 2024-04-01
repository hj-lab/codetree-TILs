#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int result1 = (a>=b) ? 1 : 0;
    cout<<result1<<endl;
    int result2 = (a>b) ? 1 : 0;
    cout<<result2<<endl;
    int result3 = (a<=b) ? 1 : 0;
    cout<<result3<<endl;
    int result4 = (a<b) ? 1 : 0;
    cout<<result4<<endl;
    int result5 = (a==b) ? 1 : 0;
    cout<<result5<<endl;
    int result6 = (a!=b) ? 1 : 0;
    cout<<result6<<endl;
    return 0;
}