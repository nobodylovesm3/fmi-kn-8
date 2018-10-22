#include <iostream>
#include <cmath>

using namespace std;

double oddNumbersSum(int start, int end){
  double sum = 0;
  for(int i=start;i<=end;i++){
    if(i%2==1){
      sum+=sqrt(i);
    }
  }
  return sum;
}

int countOnesAmount(int number){
  int counter=0;
  while(number!=0){
    if(number%2!=0){
      counter++;
    }
    number/=2;
  }
  return counter;
}

int main(){
  int startNumber, endNumber;
  cin>>startNumber>>endNumber;

  int decimalNumber;
  cin>>decimalNumber;

  cout<<oddNumbersSum(startNumber,endNumber)<<endl;
  cout<<countOnesAmount(decimalNumber)<<endl;

  return 0;
}
