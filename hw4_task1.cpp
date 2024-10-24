#include <iostream>
#include <math.h>

int main(){

double firstObjectPrice;
double secondObjectPrice;
double thirdObjectPrice;
double finalPrice;

std::cout << "Введите стоимость первого товара: ";
std::cin >> firstObjectPrice;

std::cout << "Введите стоимость второго товара: ";
std::cin >> secondObjectPrice;

std::cout << "Введите стоимость третьего товара: ";
std::cin >> thirdObjectPrice;

finalPrice = firstObjectPrice + secondObjectPrice + thirdObjectPrice;

if(firstObjectPrice + secondObjectPrice + thirdObjectPrice > 10000){

  std::cout << "Финальная стоимость товаров с учетом скидки: " << finalPrice * 0.9 << " рублей\n";
  
}
else{

  std::cout << "Финальная стоимость товаров с учетом скидки: " << finalPrice << " рублей\n";
}

}