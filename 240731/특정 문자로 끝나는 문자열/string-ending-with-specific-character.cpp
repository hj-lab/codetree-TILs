#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string arr[11];
    char alphabet;
    bool is_exist = false;

    for(int i=0; i<11; i++){
        if(i != 10){
            cin>>arr[i];
        }
        else{
            cin>>alphabet;
        }
    }

    for(int i=0; i<10; i++){
        int len = arr[i].length() - 1;
        if(arr[i][len] == alphabet){
            cout<<arr[i]<<endl;
            is_exist = true;
        }
    }

    if(!is_exist){
        cout<<"None";
    }
    return 0;
}