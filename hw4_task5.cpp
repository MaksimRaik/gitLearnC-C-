#include <iostream>
#include <math.h>

int main(){

double firstValue;
double secondValue;
double rightAnswer;

std::cout << "Введите первое число: ";
std::cin >> firstValue;

std::cout << "Введите второе число: ";
std::cin >> secondValue;

std::cout << "Введите сумму чисел: ";
std::cin >> rightAnswer;

if((firstValue + secondValue) == rightAnswer){

  std::cout << "Верно!\n";
  
}

else{

  std::cout << "Неверно. Правильный ответ: " << firstValue + secondValue << "\n";
  
}

}