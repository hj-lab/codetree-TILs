#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    cin>>first>>second; 

    for(int i=0; i<2; i++){
        second[i] = first[i];
    }

    cout<<second;
    return 0;
}