#include<iostream>
#include <ctime>
using namespace std;

inline int findMaxInline(int a, int b){
  return a > b ? a:b;
}

int findMax(int a, int b){
  return a > b ? a:b;
}

int main(){
  
  int a = 30;
  int b = 10;

  clock_t time_req;

	// Using pow function
	time_req = clock();
	for(int i=0; i<100000; i++)
	{}
  time_req = clock() - time_req;
	cout << "Using pow function, it took " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
  
  int max = findMaxInline(a,b);
  cout<<"max:"<<max;
  
}