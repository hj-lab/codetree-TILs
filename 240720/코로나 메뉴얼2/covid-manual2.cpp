#include <iostream>
using namespace std;

int main() {
    char symptom[3];
    float temperature[3];
    int A = 0, B = 0, C = 0, D = 0;
    
    // 입력 받기
    for(int i = 0; i < 3; ++i) {
        cin >> symptom[i] >> temperature[i];
    }
    
    // 각 사람에 대해 분류하기
    for(int i = 0; i < 3; ++i) {
        if(symptom[i] == 'Y' && temperature[i] >= 37.0) {
            A++;
        } else if(symptom[i] == 'N' && temperature[i] >= 37.0) {
            B++;
        } else if(symptom[i] == 'Y' && temperature[i] < 37.0) {
            C++;
        } else {
            D++;
        }
    }
    
    // 결과 출력
    cout << A << " " << B << " " << C << " " << D;
    if(A >= 2) {
        cout << " E";
    }
    cout << endl;
    
    return 0;
}