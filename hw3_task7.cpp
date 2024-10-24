#include <iostream>
#include <math.h>

int main(){

  int growInDay = 50;
  int lossInDay = 20;
  int startHeight = 100;

  double resultHeight = startHeight + 2 * (growInDay - lossInDay) + growInDay / 2;

  std::cout << "Высота бамбука к середине третьего дня: " << resultHeight << " cм" << std::endl;

}