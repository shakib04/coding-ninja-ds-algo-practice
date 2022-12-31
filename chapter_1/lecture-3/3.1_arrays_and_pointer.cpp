#include <iostream>
using namespace std;

int main31(){
  cout<<"test";
  int a[10];
  cout << "value of a: " << a <<endl;
  cout << "value of &a[0]: " << &a[0] << endl;

  a[0] = 5;
  cout << "value of *a: " << *a <<endl;
  a[1] = 10;
  cout << "value of *(a+1): " << *(a+1) <<endl;
  cout << "size of *a: " << sizeof(*(a+1)) <<endl;
}