#include <iostream>
#include <math.h>

int main(){

double distance;
double speed;
double time;
double distanceStar;

std::cout << "Введите среднюю скорость в км/ч: ";
std::cin >> speed;

std::cout << "Введите дистанцию в км: ";
std::cin >> distance;

std::cout << "Введите время в ч: ";
std::cin >> time;

distanceStar = speed * time;

if(distance <= distanceStar){

  std::cout << "Вы приехали!\n";
  
}
else{

  std::cout << "Вы не приехали\n";
}

}