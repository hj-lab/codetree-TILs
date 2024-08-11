#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin>>word;
    // 존재하면 index 반환, 존재하지 않으면 npos 반환
    size_t ee = word.find("ee");
    size_t ab = word.find("ab");

    if(ee != string::npos){
        cout<<"Yes ";
    }
    else{
        cout<<"No ";
    }

    if(ab != string::npos){
        cout<<"Yes ";
    }
    else{
        cout<<"No ";
    }
    
    return 0;
}