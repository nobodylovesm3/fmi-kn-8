#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int a;
  int random_number = rand() % 50 + 2;
  
  do {
    cout<<"Guess the number(0 to 50): ";
    cin>>a;
    if (random_number<a){
      cout<<"The secret number is lower"<<endl;
    }else if (random_number>a){
      cout<<"The secret number is higher"<<endl;
    }
  } while (random_number!=a);

  cout<<"Congrats!"<<endl;
  return 0;
}
