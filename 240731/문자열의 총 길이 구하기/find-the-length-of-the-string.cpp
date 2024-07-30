#include <iostream>
using namespace std;

int main() {
    string arr[10];
    int length = 0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
        length += arr[i].length();
    }

    cout<<length;
    return 0;
}