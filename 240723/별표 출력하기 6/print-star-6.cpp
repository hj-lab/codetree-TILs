#include <iostream>
using namespace std;

void print_stars(int n) {
    // 위쪽 부분
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // 아래쪽 부분
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print_stars(n);
    return 0;
}