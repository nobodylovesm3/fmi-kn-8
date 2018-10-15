#include <iostream>

using namespace std;

void reversePalindromeCheck(int num){
  int originalNum;
  int digit, rev = 0;
  originalNum = num;
  do{
    digit = num % 10;
    rev = (rev*10)  + digit;
    num = num/10;
  }while(num!=0);

  if(rev==originalNum){
    cout<<"True!";
  }else{
    cout<<"False!";
  }
  cout<<endl;
}
int main(){
  int num;
  cin>>num;

  isPalindrome(num);

  return 0;
}
