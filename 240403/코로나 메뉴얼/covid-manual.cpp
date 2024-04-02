#include <iostream>
using namespace std;
int main() {
    char aSymptom, bSymptom, cSymptom;
    int aTemp, bTemp, cTemp;

    int isEmergency = 0;

    cin>>aSymptom>>aTemp>>bSymptom>>bTemp>>cSymptom>>cTemp;

    // Y, >=37 -> A
    // N, >=37 -> B
    // Y, <=37 -> C
    // N, <= 37 -> D

    if(aSymptom == 'Y'){
        if(aTemp >= 37){
            isEmergency += 1;
        }
    }

    if(bSymptom == 'Y'){
        if(bTemp >= 37){
            isEmergency += 1;
        }
    }

    if(cSymptom == 'Y'){
        if(cTemp >= 37){
            isEmergency += 1;
        }
    }

    if(isEmergency >= 2){
        cout<<"E";
    }
    else{
        cout<<"N";
    }
    return 0;
}