#include <iostream>
using namespace std;

int main() { 
    int a,b;
    cin>>a>>b;
    int arrA[a];
    int arrB[b];

    for(int i=0; i<a; i++){
        cin>>arrA[i];
    }
    for(int i=0; i<b; i++){
        cin>>arrB[i];
    }

    bool isRight = fals;

    for(int i=0; i<=a-b; i++){
        isRight = true;
        for(int j=0; j<b; j++){
            if(arrA[i+j] != arrB[j]){
                isRight = false;
                break;
            }
        }

        if(isRight){
            break;
        }
    }


    if(isRight){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }



 return 0;
}