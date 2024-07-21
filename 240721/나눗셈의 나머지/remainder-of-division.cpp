#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int count_remain[b] = {0,};
    int pow_result = 0;

    while(a>1){
        int remainder = a % b;
        count_remain[remainder]++;
        a/= b;
    }


    for(int j=0; j<b; j++){
        if(count_remain[j]>0){
        pow_result += pow(count_remain[j],2);

        }
    }

    cout<<pow_result;
    return 0;
}