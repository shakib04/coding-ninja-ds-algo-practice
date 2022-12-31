#include <iostream>
using namespace std;

int main11() {
  int i = 10;
  cout <<"address of i:"<< &i << endl;
  int *p = &i;
  cout << "address of i(stored in p): " << p << endl;
  cout << "value of *p: " << *p << endl;
  cout << "address of p (different): " << &p << endl;

  float f = 10.2;
  float *pf = &f;

  double d = 122.32;
  double *pd = &d;
  
}