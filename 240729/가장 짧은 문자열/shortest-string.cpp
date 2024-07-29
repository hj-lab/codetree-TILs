#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second, third;
    int shortest, longest;
    cin>>first>>second>>third;
    
    shortest = first.length();
    longest = first.length();

    if(shortest > second.length()){
        if(second.length() > third.length()){
            shortest = third.length();
        }
        else{
            shortest = second.length();
        }
    }

    if(longest < second.length()){
        if(second.length() < third.length()){
            longest = third.length();
        }
        else{
            longest = second.length();
        }
    }

    cout<<longest - shortest;
    
    return 0;
}