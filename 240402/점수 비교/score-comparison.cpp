#include <iostream>
using namespace std;
int main() {
    int aMath, aEnglish, bMath, bEnglist;
    cin>>aMath>>aEnglish>>bMath>>bEnglist;

    if(aMath > bMath && aEnglish > bEnglist){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}