#include <iostream>
using namespace std;
int main() {
    while(true){
        int number;
        cin>>number;

        if(number == 1){
            cout<<"John"<<endl;
        }
        else if(number == 2){
            cout<<"Tom"<<endl;
        }
        else if(number == 3){
            cout<<"Paul"<<endl;
        }
        else if(number == 4){
            cout<<"Sam"<<endl;
        }
        else{
            cout<<"Vacancy"<<endl;
            break;
        }
    }
    return 0;
}