#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void calculatePi(){
  int i;
  double rand_x, rand_y, origin_dist, pi;
  int circle_points = 0, square_points = 0;

  srand(time(NULL));

  for (i = 0; i < 100000; i++) {
      rand_x = double(rand() % (100000 + 1)) / 100000;
      rand_y = double(rand() % (100000 + 1)) / 100000;
      origin_dist = rand_x * rand_x + rand_y * rand_y;
      if (origin_dist <= 1){
        circle_points++;
      }

      square_points++;

      pi = double(4 * circle_points) / square_points;

      if (i < 20) {
        getchar();
      }
  }
  cout<<pi;
}
int main(){

    calculatePi();

    return 0;
}
