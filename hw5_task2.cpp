#include <iostream>
#include <math.h>

using namespace std;

int main(){

const int banknotePrice = 100;
const int banknoteNumber = 100000;
const int maxCost = 100000;

double userCost;

cout << "Введите сумму выдачи: ";
cin >> userCost;

if ((int(userCost) / banknotePrice > banknoteNumber) or (userCost > maxCost)){
  cout << "Выдача невозможна";
}
  else{
if ((userCost < maxCost)){
  if((int(userCost) % banknotePrice == 0)){
  cout << "***Идет выдача средств***\n";
  cout << "Выдано " << int(userCost) / banknotePrice << " банкнот по " << banknotePrice <<" рублей\n";
}

  if((int(userCost) % banknotePrice != 0)){
  cout << "***Идет выдача средств***\n";
  cout << "Выдана сумма " << int(userCost) / banknotePrice * banknotePrice << " рублей\n";
  }
}
else{
  cout << "Выдача невозможна";
}
  }
}  

