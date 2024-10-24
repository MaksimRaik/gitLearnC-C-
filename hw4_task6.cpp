#include <iostream>
#include <math.h>

int main(){

int x;

std::cout << "Введите число: ";
std::cin >> x;

if((x%2) == 0){

  std::cout << "Число " << x << " четное\n";
  
}

else{

  std::cout << "Число " << x << " нечетное\n";
  
}

}