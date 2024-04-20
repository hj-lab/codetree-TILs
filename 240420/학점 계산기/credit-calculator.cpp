#include <iostream>
using namespace std;
int main() {
    cout<<fixed;
    cout.precision(1);
    int n;
    cin>>n;

    double arr[5] = {};
    double sum = 0;
    double average = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];

        sum += arr[i];
    }

    average = sum / n;

    cout<<average<<endl;

    if(average >= 4.0){
        cout<<"Perfect";
    }
    else if(average>=3.0){
        cout<<"Good";
    }
    else{
        cout<<"Poor";
    }
    return 0;
}