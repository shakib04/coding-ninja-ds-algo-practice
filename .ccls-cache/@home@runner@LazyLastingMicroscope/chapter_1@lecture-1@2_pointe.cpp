#include <iostream>
using namespace std;

int main() {
  int i = 10;
  int *p = &i;
  cout << "size of p: " << sizeof(p) << endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;
  i++; 
  cout<<"value after "<<endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;
}