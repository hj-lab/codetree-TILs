#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<101-n; i++){
        cout<<i+n<<" ";
    }
    return 0;
}