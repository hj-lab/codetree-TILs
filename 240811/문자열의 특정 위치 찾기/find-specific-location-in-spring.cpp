#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    char ch;
    cin>>word>>ch;

    size_t result = word.find(ch);

    if(result != string::npos){
        cout<<result;
    }
    else{
        cout<<"No";
    }
    return 0;
}