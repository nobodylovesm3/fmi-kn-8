#include <iostream>
#include <iomanip>
#include <cstring>



void printCharNTimes(char symbol,int size){
      for (int i = 0; i < size; i++) {
        std::cout<<symbol;
      }
}

void printTop(const char name[], int length){
  for(int i=0;i<length;i++){
    for(int currentIndexArray=0;currentIndexArray<=i;currentIndexArray++){
      std::cout<<name[currentIndexArray];
    }
    std::cout<<std::endl;
  }
}


void printBottom(const char name[], int length){
  for(int i=0;i<length;i++){
    printCharNTimes(' ',i+1);
    for(int currentIndexArray=i+1;currentIndexArray<length;currentIndexArray++){
      std::cout<<name[currentIndexArray];
    }
    std::cout<<std::endl;
  }
}

void printWholeDiamond(const char name[]){
  int length = strlen(name);
  printTop(name,length);
  printBottom(name,length);
}


int main(){
  char name[100];
  std::cin>>name;
  printWholeDiamond(name);
}
