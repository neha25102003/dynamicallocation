#include<iostream>
using namespace std;
void increment(int &n) {
 n++;
}
int& f(int n){
  int a = n;
  return a;}
int* f2() { 
 int i = 10;
 return &i;}

int main(){
int* p = f2();
int i; 
i = 10;
int& k1 = f(i);
i = 10;
int& j=i; 
increment(i);
cout << i << endl;
i++;
cout << j << endl; 
j++;
cout << i << endl;
int k = 100; 
j = k; 
cout << i << endl;
}