#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    int num = 0;

    for (int j = 0; j < m; ++j) {
        if (j % 2 == 0) {
            for (int i = 0; i < n; ++i) {
                matrix[i][j] = num++;
            }
        } else {
            for (int i = n - 1; i >= 0; --i) {
                matrix[i][j] = num++;
            }
        }
    }

    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}