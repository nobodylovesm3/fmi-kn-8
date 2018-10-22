#include <iostream>
#include <cmath>

using namespace std;

int containsAllNumbers(int number){
  int length = (int)(log10(number)+1);
  int counter=0;
  bool b[10]={0,0,0,0,0,0,0,0,0,0};
  int a[10]={0,1,2,3,4,5,6,7,8,9};
  while(number!=0){
    for(int i=0;i<length;i++){
      if(number%10==a[i]){
        if(b[i]){
          counter++;
        }else{
          b[i]=true;
        }
      }
    }
    number/=10;
  }
  int sum=0;
  int totalNumber = 10;
  for(int i=0;i<10;i++){
    sum+=(int)b[i];
  }

  //doesn't work as it should
  // if((counter+sum)%totalNumber==0){
  //   return (counter+sum)/totalNumber;
  // }

  if(sum==totalNumber){
    return 1;
  }else{
    return 0;
  }
}

int main(){
  int number;
  cin>>number;

  cout<<containsAllNumbers(number)<<endl;
  return 0;
}
