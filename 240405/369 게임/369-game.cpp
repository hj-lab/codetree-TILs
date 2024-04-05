#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int one = n%10; // 일의자리
    int ten = (n%100 - one)/10; // 십의자리

    for(int i=1; i<n+1; i++){
        if((i%3==0)|| (i==one) || (i==ten*10+one) || (i==ten) || (i==one*10+ten)){
            cout<<"0"<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}