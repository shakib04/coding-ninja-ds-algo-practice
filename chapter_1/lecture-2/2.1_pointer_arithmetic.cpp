#include <iostream>
using namespace std;

int main121(){
  int i = 10;
  int *p = &i;
  cout <<"value of p:"<< p << endl;
  p = p+1;
  cout <<"after p+1, value of p:"<< p << endl; // it will increase 4 steps because 1 = 4 bytes; 
  // as well as => int 2 = 8 bytes

  p = p+2;
  cout <<"after p+2, value of p:"<< p << endl;

  p = p-2;
  cout <<"after p-2, value of p:"<< p << endl;

  double d = 102.3;
  double *dp = &d;
  cout<<"value of dp: "<< dp <<endl;
  dp++;
  cout<<"value of dp after dp++: "<< dp <<endl; // it will increate 8 steps because double = 8 bytes
}