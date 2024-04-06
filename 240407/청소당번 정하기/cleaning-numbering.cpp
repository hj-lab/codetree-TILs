#include <iostream>
using namespace std;
int main() {
    int day;
    cin>>day;

    int classCnt = 0;
    int corridorCnt = 0;
    int toiletCnt = 0;

    // for(int i=1; i<day+1; i++){
    //     if(i % 2 == 0){ // 2일마다 교실청소
    //         if(i % 2 == 3){ //인데 2,3의 배수 = 복도 청소
    //             if(i % 12 == 0){ // 인데 2,3,12의 배수 = 화장실 청소
    //                 toiletCnt++;
    //             }
    //             else{
    //                 corridorCnt++;
    //             }
    //         }
    //         else{
    //             classCnt++;
    //         }
    //     }
    //     else if(i % 3 == 0){
    //         if(i % 12 == 0){
    //             toiletCnt++;
    //         }
    //         else{
    //             corridorCnt++;
    //         }
    //     }
    //     else if(i % 12 == 0){
    //         toiletCnt++;
    //     }
        

    // }
    // i가 2의 배수 = 교실, 3의 배수 = 복도, 12의 배수=화장실
    // 6의 배수 = 복도

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