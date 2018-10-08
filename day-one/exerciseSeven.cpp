#include <iostream>

using namespace std;

int main(){
  int n;
  int factorial = 1;

  do{
    cout<<"Input n (n>=0): ";
    cin>>n;
  }while(n<0);
  if(n==0){
    cout<<"0"<<endl;
  }else{
    for(int i=1;i<=n;i++){
      factorial*=i;
    }
  }

  cout<<factorial<<endl;


  return 0;
}
