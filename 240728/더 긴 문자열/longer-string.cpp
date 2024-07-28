#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    cin>>first>>second;

    if(first.length() > second.length()){
        cout<<first<<" "<<first.length()<<endl;
    }
    else if(first.length() < second.length()){
        cout<<second<<" "<<second.length()<<endl;
    }
    else{
        cout<<"same";
    }
    return 0;
}