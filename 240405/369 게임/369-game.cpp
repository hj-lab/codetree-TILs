#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int one = n%10; // 일의자리
    int ten = (n%100 - one)/10; // 십의자리

    cout<<one<<" "<<ten<<" "<<endl;

    for(int i=1; i<n+1; i++){
        if((i%3==0)|| (i%10 == one||ten) || ((i%100-i%10)/10==one||ten) ){
            cout<<"0"<<" ";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}