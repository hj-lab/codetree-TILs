#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int fSum = 0;
    double sSum = 0; 
    int sCount = 0;

    for(int i=0; i<10; i++){
        int number;
        cin>>number;

        arr[i] = number;
    }

    for(int j=1; j<10; j+=2){
        fSum += arr[j];
    }

    for(int k=2; k<10; k+=3){
        sSum += arr[k];
        sCount++;
    }

    cout<<fixed;
    cout.precision(1);
    cout<<fSum<<" "<<(sSum/sCount)<<endl;


    return 0;
}