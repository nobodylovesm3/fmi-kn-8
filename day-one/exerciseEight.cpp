#include <iostream>

using namespace std;

int fibonacciRecursion(int n){
  if(n==0||n==1){
    return n;
  }
  return fibonacciRecursion(n-1)+fibonacciRecursion(n-2);
}
int main(){
  
  int n;
  cin>>n;
  cout<<fibonacciRecursion(n)<<endl;
  return 0;
}
