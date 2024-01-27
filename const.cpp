#include <iostream>
using namespace std;
int main(){
    //const refrence for non constant integer
    int j=10;
    const int &k=j;
    j++;//k++ is error
    cout<<k;
    int const j2=12;
    int const &k2=j2;
    //k2++ and j2++ both are wrong
}