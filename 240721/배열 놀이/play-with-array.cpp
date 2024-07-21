#include <iostream>
using namespace std;

int main() {
    // 1. n,q 입력 받음
    int n,q;
    cin>>n>>q;
    // 2. n개 배열 원소 입력
    int arrN[n];
    for(int i=0; i<n; i++){
        cin>>arrN[i];
    }
    // 3. 질의 q개 입력 받음
    for(int j=0; j<q; j++){
        int number;
        cin>>number;

        if(number == 1){
            int a;
            cin>>a;
            cout<<arrN[a-1]<<endl;
        }
        else if(number == 2){
            int b;
            cin>>b;
            bool find = false;
            for(int k=0; k<n; k++){
                if(arrN[k] == b){
                    cout<<k+1<<endl;
                    find = true;
                    break;
                }
            }
            if(!find){
                cout<<0<<endl;
            }
        }
        else if(number == 3){
            int s,e;
            cin>>s>>e;
            for(int l=s-1; l<e; l++){
                cout<<arrN[l]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}