#include <iostream>
using namespace std;
int main() {
    int a,b;
    int sum_val = 0;
    cin>>a>>b;



    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }

    for(int i=a; i<b+1; i++){
        if(i % 5 == 0){
            sum_val += i;
        }
    }

    cout<<sum_val;
    return 0;
}