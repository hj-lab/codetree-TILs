#include <iostream>
using namespace std;
int main() {
    int aMath, aEnglish, bMath, bEnglish;
    cin>>aMath>>aEnglish>>bMath>>bEnglish;

    char winner;

    if(aMath != bMath){
        if(aMath < bMath){
            winner = 'B';
        }
        else{
            winner = 'A';
        }
    }
    else{ // 수학 성적이 같다면
        if(aEnglish < bEnglish){
            winner = 'B';
        }
        else{
            winner = 'A';
        } 
    }

    cout<<winner;
    return 0;
}