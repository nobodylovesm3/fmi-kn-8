#include <iostream>

using namespace std;

int main(){
  double x, y;

  cout<<"Input cordinates(x;y): ";

  cin>>x>>y;
  if(((x>=1&&x<=2)||(x>=-2&&x<=-1))&&((y>=1&&y<=2)||(y>=-2&&y<=-1))){
    cout<<"You're in the zone!"<<endl;
  }else{
    cout<<"You're outside of the zone. :("<<endl;
  }
  return 0;
}
