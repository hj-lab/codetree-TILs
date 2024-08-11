#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string ch;

    size_t result = word.find(ch);

    if(result != string::npos){
        cout<<result+1;
    }
    else{
        cout<<-1;
    }
    return 0;
}