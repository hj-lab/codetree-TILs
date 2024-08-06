#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string result;


    for(int i=0; i<n; i++){
        string A;
        cin>>A;
        result += A;
    }
  
    for(int i=0; i<result.length(); i+=5){
        cout<<result.substr(i, 5)<<endl;
    }

    return 0;
}