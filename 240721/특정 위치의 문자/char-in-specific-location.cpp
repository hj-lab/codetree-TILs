#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char my;
    int idx = -1;
    cin>>my;

    for(int i=0; i<6; i++){
        if(arr[i] == my){
            idx = i;
        }
    }

    if(idx == -1){
        cout<<"None";
    }
    else{
        cout<<idx;
    }


    return 0;
}