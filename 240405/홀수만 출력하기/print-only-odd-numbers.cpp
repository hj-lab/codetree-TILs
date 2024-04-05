#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int isOddAnd;
        cin>>isOddAnd;
        if(isOddAnd%2==1 && isOddAnd%3==0){
            cout<<isOddAnd<<endl;
        }
    }
    return 0;
}