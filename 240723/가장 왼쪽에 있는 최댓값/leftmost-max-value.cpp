#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int index = N;
    while (index > 0) {
        int max_value = arr[0];
        int max_index = 0;

        for (int i = 1; i < index; ++i) {
            if (arr[i] > max_value) {
                max_value = arr[i];
                max_index = i;
            }
        }

        cout << max_index + 1 << " ";
        index = max_index;
    }

    return 0;
}