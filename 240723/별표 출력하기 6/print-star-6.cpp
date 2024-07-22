#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 위쪽 부분 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "  "; // 앞부분 공백 출력
        }
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // 아래쪽 부분 출력
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "  "; // 앞부분 공백 출력
        }
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}