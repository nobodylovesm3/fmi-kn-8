#include <iostream>

using namespace std;

  bool isPrimeNumber(int n){
    bool isPrime = true;
    for(int i = 2; i <= n / 2; ++i){
      if(n % i == 0){
          isPrime = false;
          break;
      }
    }
    return isPrime;
  }
int main(){
  int num;
  cin>>num;

  for(int i=1;i<num;i++){
    if(isPrimeNumber(i)){
      cout<<i<<' ';
    }
  }
  cout<<endl;
  return 0;
}
