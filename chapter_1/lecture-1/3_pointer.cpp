#include <iostream>
using namespace std;

int main13() {
  int i;
  cout <<"value of i:"<< i << endl;
  i++;
  cout <<"value of i after i++: "<< i << endl;
  
  int *p;
  cout << "value of p: " << p << endl;
  cout << "value of *p: " << *p << endl;
  (*p)++;
  cout <<"value of *p after (*p)++: "<< *p << endl;
}