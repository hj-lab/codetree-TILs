#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>>word;

    word[1] = word[word.length()-2] = 'a';

    cout<<word;

    return 0;
}