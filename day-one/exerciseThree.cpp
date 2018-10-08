#include <iostream>

using namespace std;

int main(){

  int firstNumber, secondNumber;
  char symbol;

  cout<<"Input the first number: ";
  cin>>firstNumber;

  cout<<"Input the symbol ('+', '-', '*', '/', '%'): ";
  cin>>symbol;

  cout<<"Input the second number: ";
  cin>>secondNumber;

  cout<<firstNumber<<" "<<symbol<<" "<<secondNumber<<" = ";
  switch(symbol){
    case  '+':
      cout<<firstNumber+secondNumber;
      break;
    case '-':
      cout<<firstNumber-secondNumber;
      break;
    case '*':
      cout<<firstNumber*secondNumber;
      break;
    case '/':
      cout<<firstNumber/secondNumber;
      break;
    case '%':
      cout<<firstNumber%secondNumber;
      break;
    default:
      cout<<"error 404!";
  }
  
  return 0;
}
