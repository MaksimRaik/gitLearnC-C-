#include <iostream>
#include <math.h>

int main(){

int firstValue;
int secondValue;

std::cout << "Введите перове число: ";
std::cin >> firstValue;

std::cout << "Введите второе число: ";
std::cin >> secondValue;

if( firstValue % secondValue == 0 ){

  std::cout << "Да, " << firstValue << " делится на " << secondValue << " без остатка\n";
  
}
else{

  std::cout << "Нет, " << firstValue << " не делится на " << secondValue << " без остатка\n";
  
}
}