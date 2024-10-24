#include <iostream>

int main(){

  std:: string loginUser;
  std:: string passwordUser;

  std::cout << "Введите логин: ";
  std::cin >> loginUser;
  std::cout << "\n";

  std::cout << "Введите пароль: ";
  std::cin >> passwordUser;
  std::cout << "\n";

  std::cout << loginUser << ", вы успешно зашли!";

  return 0;
}