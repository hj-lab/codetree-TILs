#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 2 * n - 1;  // 격자의 크기
    int mid = size / 2;    // 중간 지점

    for (int i = 0; i < size; ++i) {
        int stars = n - abs(mid - i); // 각 행의 '*' 개수
        int spaces = mid - stars + 1; // 각 행의 공백 개수

        // 공백 출력
        for (int j = 0; j < spaces; ++j) {
            cout << ' ';
        }

        // '*' 출력
        for (int j = 0; j < 2 * stars - 1; ++j) {
            cout << '*';
        }

        cout << endl; // 행 종료
    }

    return 0;
}