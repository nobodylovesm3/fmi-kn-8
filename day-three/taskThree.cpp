#include <iostream>
#include <cmath>
using namespace std;


void printMatrix(int number){
    for(int i=0;i<number;i++){
      for(int j=0;j<number;j++){
        if(i==j){
          cout<<0;
        }else{
          cout<<abs(j-i);
        }
      }
      cout<<endl;
    }
}

int main(){
  int n;

  cin>>n;

  printMatrix(n);

  return 0;
}
