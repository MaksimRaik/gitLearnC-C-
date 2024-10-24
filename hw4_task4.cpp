#include <iostream>
#include <math.h>

int main(){

double firstValue;
double secondValue;

std::cout << "Введите первое число: ";
std::cin >> firstValue;

std::cout << "Введите второе число: ";
std::cin >> secondValue;

if(firstValue >= secondValue){

  std::cout << "Наименьшее из двух чисел " << secondValue << "\n";
  
}

else{

  std::cout << "Наименьшее из двух чисел " << firstValue << "\n";
  
}

}