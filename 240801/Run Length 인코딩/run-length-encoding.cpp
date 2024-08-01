#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;

    string encoded = "";
    int n = A.size();

    for (int i = 0; i < n; ++i) {
        char currentChar = A[i];
        int count = 1;
        
        while (i + 1 < n && A[i + 1] == currentChar) {
            ++count;
            ++i;
        }
        
        encoded += currentChar;
        encoded += to_string(count);
    }

    cout << encoded.size() << endl;

    cout << encoded << endl;

    return 0;
}