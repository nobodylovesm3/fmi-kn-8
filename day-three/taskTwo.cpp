#include <iostream>

using namespace std;

bool isPerfectNumber(int n){
  int i=1;
  int sum = 0;

  while(i<n){

    if(n%i==0){
      sum+=i;
    }

    i++;
  }

  if(sum==n){
    return true;
  }else{
    return false;
  }
}

int main(){
  int number,
      sum=0;
  cin>>number;

  for(int i=0;i<number;i++){
    if(isPerfectNumber(i)){
      sum+=i;
    }
  }

  cout<<sum<<endl;
  
  return 0;
}
