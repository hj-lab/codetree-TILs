#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum_val = 0;

    for(int i=0; i<n; i++){
        int number;
        cin>>number;

        if(number % 2 == 1 && number % 3 == 0){
            sum_val += number;
        }
    }

    cout<<sum_val<<endl;
    return 0;
}