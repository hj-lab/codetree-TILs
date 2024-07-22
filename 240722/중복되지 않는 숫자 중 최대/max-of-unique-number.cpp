#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];
    unordered_map<int, int> frequency;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        frequency[arr[i]]++;
    }

    int max_unique = -1;
    for (int i = 0; i < N; ++i) {
        if (frequency[arr[i]] == 1 && arr[i] > max_unique) {
            max_unique = arr[i];
        }
    }

    cout << max_unique << endl;

    return 0;
}