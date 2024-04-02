#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;

    int middle = a;
    int first, last;
    if(a < b){
        if(b<c){
            middle = b;
        }
        else{ //c<b
            if(a<c){
                middle = c;
            }
            else{ // c<a
                middle = a;
            }
        }
    }
    else{ // b<a
        if(a<c){
            middle = a;
        }
        else{ // c<a
            if(b<c){
                middle = c;
            }
            else{ //c<b
                middle = b;
            }
        }
    }

    cout<<middle;
    return 0;
}