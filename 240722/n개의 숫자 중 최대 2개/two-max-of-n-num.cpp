#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100]; // 최대 크기 100으로 정적 배열 선언

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int max_first = INT_MIN;
    int max_second = INT_MIN;

    for (int i = 0; i < N; ++i) {
        if (arr[i] > max_first) {
            max_second = max_first;
            max_first = arr[i];
        } else if (arr[i] == max_first) {
            // 만약 현재 값이 max_first와 같으면 max_second를 갱신
            max_second = max_first;
        } else if (arr[i] > max_second) {
            max_second = arr[i];
        }
    }

    cout << max_first << " " << max_second << endl;

    return 0;
}