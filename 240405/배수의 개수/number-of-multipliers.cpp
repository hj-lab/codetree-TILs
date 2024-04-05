#include <iostream>
using namespace std;
int main() {
    int threecnt = 0;
    int fivecnt = 0;
    for(int i=0; i<10; i++){
        int number;
        cin>>number;

        if(number%3==0){
            threecnt++;
        }
        if(number%5 == 0){
            fivecnt++;
        }
    }

    cout<<threecnt<<" "<<fivecnt<<endl;
    return 0;
}