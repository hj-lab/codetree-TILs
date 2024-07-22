#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; --i) {
        // 왼쪽 별 출력
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        // 중간 공백 출력
        for (int j = 0; j < 2 * (n - i); ++j) {
            cout << " ";
        }
        // 오른쪽 별 출력
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}