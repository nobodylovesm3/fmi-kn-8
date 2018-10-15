#include <iostream>

using namespace std;

void switchCase(char c){
  if(c>64&&c<91){
    c+=32;
  }else if(c>96&&c<123){
    c-=32;
  }else{
    cout<<"Wrong input!"<<endl;
  }
  cout<<(char)c;
}

int main(){

  char c;
  cin>>c;

  switchCase(c);

  return 0;
}
