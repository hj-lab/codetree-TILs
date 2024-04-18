#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        int n;
        int cnt = 0;
        cin>>n;

        while(true){
            if(n == 1){
                cout<<cnt<<endl;
                break;
            }

            if(n%2 == 0){
                n /= 2;
                cnt++;
            }
            else{
                n = 3*n + 1;
                cnt++;
            }
        }
        
    }
    return 0;
}