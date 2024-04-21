#include <iostream>
using namespace std;
int main() {
    int n;
    int passCnt = 0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int sum = 0;
        int scoreArr[4] = {};
        double average = 0;

        for(int j = 0; j<4; j++){
            cin>>scoreArr[j];
            sum += scoreArr[j];
        }

        average = (double) sum / 4;

        if(average >= 60){
            cout<<"pass"<<endl;
            passCnt++;
        }
        else{
            cout<<"fail"<<endl;
        }

    }
    cout<<passCnt;

    return 0;
}