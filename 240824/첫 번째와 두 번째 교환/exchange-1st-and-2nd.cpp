#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>>word;
    char first = word[0];
    char second = word[1];

    for(int i=0; i<word.length(); i++){
        if(word[i] == first){
            word[i] = second;
        }
        else if(word[i] == second){
            word[i] = first;
        }

    }

    cout<<word;

    return 0;
}