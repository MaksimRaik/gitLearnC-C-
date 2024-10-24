#include <iostream>
#include <math.h>

int main(){

int expPoints;

std::cout << "Введите число очков опыта: ";
std::cin >> expPoints;

std::cout << "Уровень персонажа: " << (expPoints / 2500 + 1*(expPoints >= 1000));

}