#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    cout.precision(1);
    int arr[2][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    // 가로 평균
    for(int i=0; i<2; i++){
        double row_sum = 0;
        for(int j=0; j<4; j++){
            row_sum += arr[i][j];
        }
        cout<<row_sum / 4<<" ";
    }
    cout<<endl;

    // 세로 평균
    for(int i=0; i<4; i++){
        double column_sum = 0;
        for(int j=0; j<2; j++){
            column_sum += arr[j][i];
        }
        cout<<column_sum / 2<<" ";
    }
    cout<<endl;

    // 전체 평균
    double all_sum = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            all_sum += arr[i][j];
        }
    }
    cout<<all_sum/8<<endl;


    return 0;
}