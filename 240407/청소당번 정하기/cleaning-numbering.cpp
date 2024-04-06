#include <iostream>
using namespace std;
int main() {
    int day;
    cin>>day;

    int classCnt = 0;
    int corridorCnt = 0;
    int toiletCnt = 0;

    for(int i=1; i<=day; i++){
        if(i%12 == 0){
            toiletCnt++;
        }
        else if(i%3 == 0){
            corridorCnt++;
        }
        else if(i%2 == 0){
            classCnt++;
        }
    }

    cout<<classCnt<<" "<<corridorCnt<<" "<<toiletCnt;
    return 0;
}