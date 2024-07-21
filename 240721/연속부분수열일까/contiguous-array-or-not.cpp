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

    // b의 첫번째 원소가 나오는 index를 저장해놓고 거기부터 따져보기
    bool isRight = false;
    // a의 N번째에 b의 첫번째 원소가 있음을 담고 있다
    int isSequence[b] = {0,};

    for(int i=0; i<a; i++){
        if(arrA[i] == arrB[0]){
            isSequence[i] = i;
        }
    }

    for(int i=0; i<b; i++){
        if(arrA[isSequence[i]] != arrB[i]){
            break;
        }
        else{
            isRight = true;
        }
    }

    if(isRight == true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }



 return 0;
}