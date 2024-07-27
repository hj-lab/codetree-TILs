#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 0)); // n * m 크기의 2차원 벡터 초기화

    int num = 1;
    // 모든 대각선을 따라 숫자를 채우기
    for (int d = 0; d < n + m - 1; d++) {
        int row = (d < m) ? 0 : d - m + 1;
        int col = (d < m) ? d : m - 1;
        while (row < n && col >= 0) {
            arr[row][col] = num++;
            row++;
            col--;
        }
    }

    // 배열 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}