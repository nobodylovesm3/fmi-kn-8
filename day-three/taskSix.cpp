#include <iostream>

using namespace std;


static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

void makePassword(int length){

  for(int i=0;i<length;i++){
    cout<<alphanum[rand() % size];
  }
  cout<<endl;
}
int main()
{
  int length;
  cin>>length;

  makePassword(length);
	return 0;
}
