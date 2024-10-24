#include <iostream>
#include <math.h>

int main(){

  double firstValue;
  double secondValue;

  std::cout << "Введите значение первой переменной: ";
  std::cin >> firstValue;

  std::cout << "Введите значение второй переменной: ";
  std::cin >> secondValue;

  firstValue = firstValue + secondValue;
  secondValue = abs(secondValue-firstValue);
  firstValue = abs(secondValue - firstValue);

  std::cout << "Значение первой переменной: " << firstValue << ". Значение второй переменной: " << secondValue;

}