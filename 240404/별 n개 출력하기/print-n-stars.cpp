#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    int j=1;
    while(i<=n){
        while(i<=j){
        cout<<"*";
        i++;
        }
        cout<<endl;
        j++;
    }
    return 0;
}