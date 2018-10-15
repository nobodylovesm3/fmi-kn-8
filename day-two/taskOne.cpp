#include <iostream>

using namespace std;

int main(){

  char c;
  cin>>c;

  if(c>64&&c<91){
    c+=32;
  }else if(c>96&&c<123){
    c-=32;
  }
  cout<<(char)c;

  return 0;
}
