#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cnt = 1;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            for(int j=0; j<n; j++){
                cout<<cnt<<" ";
                cnt++;
            }
        }
        else{
            for(int j=0; j<n; j++){
                cnt += 2;
                cout<<cnt-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}