#include <iostream>
using namespace std;

int main() {
    int score[100];
    int count_score[11] = {0};

    for(int i=0; i<100; i++){
        cin>>score[i];
        if(score[i] == 0){
            break;
        }

        count_score[score[i]/10]++;

    }

    for(int i=10; i>0; i--){
        cout<<i*10<<" - "<<count_score[i]<<endl;
    }
    return 0;
}