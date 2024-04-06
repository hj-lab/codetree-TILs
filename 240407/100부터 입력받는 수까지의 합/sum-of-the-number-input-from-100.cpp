#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum_val = 0;
    for(int i=n; i<101; i++){
        sum_val += i;
    }
    
    cout<<sum_val;
    
    return 0;
    
}