#include <iostream>
#include <math.h>

int main(){

double x;

std::cout << "Введите число: ";
std::cin >> x;

if(x > 0){

  std::cout << "Модуль числа " << x << " равен " << x;
  
}

else{

  std::cout << "Модуль числа " << x << " равен " << -x;
  
}

}