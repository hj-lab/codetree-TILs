#include <iostream>
using namespace std;

int main() {
    string first;
    getline(cin, first);
    char alphabet;
    cin>>alphabet;
    int cnt = 0;

    for(int i=0; i<first.length(); i++){
        if(first[i] == alphabet){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}