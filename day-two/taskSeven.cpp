#include <iostream>

using namespace std;

int playerChoice(){
  int choice;
  cout<<"Choose: \n1.Paper; \n2.Scissors;\n3.Rock."<<endl;
  cin>>choice;
  return choice;
}


bool compareChoices(int playerOneChoice, int playerTwoChoice){
  bool flag = true;
  if((playerOneChoice==1&&playerTwoChoice==3)||(playerOneChoice==2&&playerTwoChoice==1)||(playerOneChoice==3&&playerTwoChoice==2)){
    cout<<"Player one wins!";
    flag = false;
  }else if((playerOneChoice==1&&playerTwoChoice==2)||(playerOneChoice == 2&& playerTwoChoice ==3)||(playerOneChoice == 3&& playerTwoChoice ==1)){
    cout<<"Player two wins!";
    flag = false;
  }else {
    cout<<"Draw!";
  }
  cout<<endl;
  return flag;
}


int main(){
  int playerOne, playerTwo;
  bool flag = true;
  do {
    playerOne = playerChoice();
    playerTwo = playerChoice();
    flag = compareChoices(playerOne,playerTwo);

  } while(flag);

  return 0;
}
