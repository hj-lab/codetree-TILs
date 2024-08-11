#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>>word;
    int eecnt = 0;
    int ebcnt = 0;

    for(int i=0; i<word.length(); i++){
        if(word[i] == 'e' && word[i+1] == 'e'){
            eecnt++;
        }

        if(word[i] == 'e' && word[i+1] == 'b'){
            ebcnt++;
        }
    }

    cout<<eecnt<<" "<<ebcnt;
    return 0;
}