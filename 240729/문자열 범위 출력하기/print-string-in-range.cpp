#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    getline(cin, first);

    for(int i=2; i<10; i++){
        cout<<first[i];
    }
    return 0;
}