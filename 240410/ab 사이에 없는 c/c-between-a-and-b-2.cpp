#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    bool satisfied = true;

    for(int i=a; i<b+1; i++){
        if(i%c == 0){
            satisfied = false;
        }
    }

    if(satisfied == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}