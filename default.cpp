#include <iostream>
using namespace std;
int sumarray(int a[],int size,int si){
    int sum=0;
    for (int i = si; i < size; i++)
    {sum=sum+a[i];}
    cout<<sum;
    }
    int sumnum(int a,int b,int c, int d=0){
       int  sum=a+b+c+d;
       cout<<sum<<endl;}
int main(){
    int a[20];
    sumnum(2,3,4,5);
    sumnum(1,2,3);
}