#include <iostream>
using namespace std;

void print(int* p){
  cout<<"print after passing p pointer"<<*p<<endl;
}

void incrementPointer(int* p){
  p = p + 1;
}

void increment(int* p){
  (*p)++;
}

void changeArrayValue(int a[]){
  a[4] = 33;
}

int main151(){
  int i = 10;
  int *p = &i;
  cout<<"address of p:"<<p<<endl;
  cout<<"value of *p:"<<*p<<endl;
  print(p);
  
  incrementPointer(p);
  cout<<"after incrementing pointer using method; value will unchange in main method: "<<p<<endl;

  p = p + 1;
  cout<<"now value will change: "<<p<<endl;

  
  int a[10];
  //a[2] = 4;
  //cout<<a[2]<<endl;

  changeArrayValue(a);
  cout<<a[4]<<endl;
}