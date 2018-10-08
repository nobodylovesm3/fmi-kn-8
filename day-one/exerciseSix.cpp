#include <iostream>

using namespace std;

int main(){

  int n;
  int leftover;
  int reversedNumber = 0;
  int sum = 0;

  do{
    cout<<"Input n (n>0): ";
    cin>>n;
  }while(n<=0);

  while(n!=0){
    leftover = n%10;
    reversedNumber = reversedNumber*10 + leftover;
    n/=10;
    sum+=leftover;
  }

  cout<<"Sum: "<<sum<<endl;
  cout<<"Reversed: "<<reversedNumber<<endl;

  return 0;
}
