#include <iostream>
using namespace std;

int main231(){
  int *p = new int;
  *p = 20;
  p[1] = 2;
  cout<<"value of *p: "<<*p<<endl;
  cout<<"address of p: "<<&p<<endl;
  cout<<"value of p[1]: "<<p[1]<<endl;
  cout<<"value of p[0]: "<<p[0]<<endl;
}