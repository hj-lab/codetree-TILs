#include <iostream>
using namespace std;
int main() {
    // (n=3) i = 0 1 2-> 공백 = 0 1 2(i) / 별개수 5 3 1 (2*i+1)
    int n;
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=n-i; j>0; j--){
            cout<<"  ";
        }

        for(int j=2*(i-1)+1; j>0; j--){
            cout<<"* ";
        }

        cout<<"\n";
    }
    return 0;
}