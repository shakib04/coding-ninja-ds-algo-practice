#include <iostream>
using namespace std;

int main12() {
  int i = 10;
  int *p = &i;
  cout << "size of p: " << sizeof(p) << endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;
  i++; 
  cout<<"value after "<<endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;

  int a = *p; // or int a = i; (both are same)
  a++;
  cout<<"value after initialize *p into a and a++."<<endl;
  cout << "value of a: " << a << endl;
  cout << "value of *p: " << *p << endl;

  i = 13;
  cout<<"value after i = 13; Expectection is i and p value will be changed to 13."<<endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;

  *p = 23;
  cout<<"value after *p = 23; Expectection is i and p value will be changed to 23."<<endl;
  cout << "value of i: " << i << endl;
  cout << "value of *p: " << *p << endl;

  
  
}