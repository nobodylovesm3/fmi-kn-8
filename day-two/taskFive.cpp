#include <iostream>

using namespace std;

void numbersInterval(int m,int n){
    for(int i=1;i<n;i++){
      if(i%m==0){
        cout<<i<<" ";
      }
    }
    cout<<endl;
}

int main(){
  int m,n;
  cin>>n>>m;

  numbersInterval(m,n);
  return 0;
}
