#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int sum = a+b+c;
    int score = (a+b+c)/3;

    cout<<sum<<endl;
    cout<<score<<endl;
    cout<<sum-score<<endl;
    return 0;
}