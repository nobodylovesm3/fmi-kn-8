#include <iostream>

void printChange(float money){
    float change[4] = {1.0, 0.2, 0.05, 0.01};

    for(int i=0;i<4;i++){
      int currentChangeCount = 0;

        while(change[i] <= money){
            money -= change[i];
            currentChangeCount++;
        }

        std::cout << currentChangeCount << '*';

        if (change[i] >= 1.0){
          std::cout<<change[i];
          std::cout<<" lv.";
        }else{
          std::cout<<change[i]*100;
          std::cout<<" st.";
        }
        std::cout<<' ';
    }

    std::cout<<"\n";
}

int main(){

  float money;
  std::cin>>money;
  printChange(money);
}
