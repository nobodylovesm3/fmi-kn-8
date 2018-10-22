#include <iostream>

using namespace std;


double numberSeries(int n){
  double sum=0;
  double currentNumber;
  for(int i=1;i<n+1;i++){
    currentNumber=i*(i+1);
    sum+=(1/currentNumber);
  }

  return sum;
}



int main(){
  int number;
  cin>>number;

  cout<<numberSeries(number)<<endl;
  return 0;
}
