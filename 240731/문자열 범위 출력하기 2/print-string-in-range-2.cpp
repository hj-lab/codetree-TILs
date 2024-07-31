#include <iostream>
using namespace std;

int main() {
    string voc;
    int len;
    cin>>voc>>len;

    for(int i=voc.length()-1; i>=voc.length()-len; i--){
        cout<<voc[i];
    }
    
    return 0;
}