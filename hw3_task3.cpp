#include <iostream>

int main(){

  std:: string nameCharacter;
  std:: string raceCharacter;

  std::cout << "Введите расу перонажа: ";
  std::cin >> raceCharacter;
  std::cout << "\n";

  std::cout << "Введите имя пероснажа: ";
  std::cin >> nameCharacter;
  std::cout << "\n";

  std::cout << "Родился новый " << raceCharacter << ", его зовут " << nameCharacter << ". Добро пожаловать в этот суровый мир!";

  return 0;
}