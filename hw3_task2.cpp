#include <iostream>

int main(){

  int productPrice;
  int deliveryPrice;
  double discountPercent;
  double finalPrice;

  std::cout << "Введите стоимость товара: ";
  std::cin >> productPrice;
  std::cout << "\n";

  std::cout << "Введите стоимость доставки: ";
  std::cin >> deliveryPrice;
  std::cout << "\n";

  std::cout << "Введите размер скидки в процентах: ";
  std::cin >> discountPercent;
  std::cout << "\n";

  finalPrice = productPrice + deliveryPrice - (productPrice * discountPercent / 100);

  std::cout << "Стоимость товара: " << finalPrice << "\n";

  return 0;
}