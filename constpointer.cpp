#include <iostream>
using namespace std;
int main(){
    int const i= 10;
    int const *p=&i;
    int j=12;
    int const *p2=&j;
    cout<<*p2<<endl;
    j++;
     cout<<*p2<<endl;

}