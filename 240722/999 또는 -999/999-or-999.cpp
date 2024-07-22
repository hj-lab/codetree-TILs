#include <iostream>
using namespace std;

int main() {
    int max = -1000;
    int min = 1000;

    for(int i=0; i<100; i++){
        int number;
        cin>>number;
        if(number == 999 || number == -999){
            break;
        }

        if(max < number){
            max = number;
        }
        
        if(min > number){
            min = number;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}