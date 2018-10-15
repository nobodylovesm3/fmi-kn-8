#include <iostream>

using namespace std;

int power(int num, int exponent){
  int result=1;
  while(exponent!=0){
    result*=num;
    exponent--;
  }
  return result;
}

int main(){
  int base;
  int exponent;

  cin>>base>>exponent;

  cout<<power(base,exponent)<<endl;
  return 0;
}
