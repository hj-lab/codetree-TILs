#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        int result = 1;
        for(int j=a; j<=b; j++){
            result *= j;
        }
        cout<<result<<endl;

    }
    return 0;
}