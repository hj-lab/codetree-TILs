#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int myarray[n];

    for(int i=0; i<n; i++){
        int number;
        cin>>number;

        myarray[i] = number;
    }

    for(int i=n-1; i>=0; i--){
        if(myarray[i] % 2 == 0){
            cout<<myarray[i]<<" ";
        }
    }
    return 0;
}