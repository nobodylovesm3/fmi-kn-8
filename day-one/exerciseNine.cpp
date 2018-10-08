#include <iostream>

using namespace std;

int main(){

  int n;
  int counter =0;
  cin>>n;

  for(int currentRow=0;currentRow<n;currentRow++){
    for(int i=0;i<n - currentRow - 1;i++){
      cout<<" ";
    }
    for(int j=0;j<(2*currentRow)+1;j++){
      cout<<currentRow+1;
    }
    for(int k = n -2;k>currentRow;k--){
      cout<<" ";
    }
    cout<<endl;

    if(counter>0){
      break;
    }
  }
  return 0;
}
