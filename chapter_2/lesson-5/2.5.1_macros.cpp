#include<iostream>
using namespace std;
//#define PI 3.14

// it is defined at first on-time compile and placed direct value on-time of compile

// it saves memory due to no extra variable.

void f1(){
  cout<<"I am from function f1";
}

#define PI 3.14

int main251(){
  int r;
  cin >> r;

  //cout << 3.14 * r * r <<endl;
  cout << PI * r * r <<endl;
}