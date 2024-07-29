#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string first, second; 
    string result;

    getline(cin, first);
    getline(cin, second);

    result = first + second;

    result.erase(remove(result.begin(), result.end(), ' '), result.end());

    cout<<result;
    
    return 0;
}