#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string ch;
    cin>>word>>ch;

    size_t result = word.find(ch);

    if(result != string::npos){
        cout<<result;
    }
    else{
        cout<<-1;
    }
    return 0;
}