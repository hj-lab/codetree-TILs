#include <iostream>
using namespace std;

int main() {
    string voc;
    int len;
    cin>>voc>>len;

    int reverse = voc.length() < len ? 0 : voc.length()-len;

    for(int i=voc.length()-1; i>=reverse; i--){
        cout<<voc[i];
    } 

    return 0;
}