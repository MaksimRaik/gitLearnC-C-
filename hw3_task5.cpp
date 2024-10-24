#include <iostream>

int main(){

    int totalPassenger = 0;
    double moneyTotal = 0;
    int PassengerComeInBus;
    int PassengerComeOutBus;

    double driverSalary;
    double fuelCosts;
    double tax;
    double forCarRepairMoney;

    std::cout << "Прибываем на остановку Один. В салоне пассажиров: " << totalPassenger << "\n";
    std::cout << "Cколько пассажиров зашло на остановке? ";
    std::cin >> PassengerComeInBus;
    totalPassenger += PassengerComeInBus;
    moneyTotal += PassengerComeInBus * 20;

    std::cout << "Отправляемся с остановки Один. В салоне  " << totalPassenger << "\n";

    std::cout << "-----------Едем-----------\n";
    std::cout << "Прибываем на остановку Два. В салоне  " << totalPassenger << "\n";
    
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> PassengerComeOutBus;
    totalPassenger -= PassengerComeOutBus;
    std::cout << "Cколько пассажиров зашло на остановке? ";
    std::cin >> PassengerComeInBus;
    totalPassenger += PassengerComeInBus;
    moneyTotal += PassengerComeInBus * 20;

    std::cout << "Отправляемся с остановки Два. В салоне  " << totalPassenger << "\n";
    std::cout << "-----------Едем-----------" << "\n";
    std::cout << "Прибываем на остановку Три. В салоне  " << totalPassenger << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> PassengerComeOutBus;
    totalPassenger -= PassengerComeOutBus;
    std::cout << "Cколько пассажиров зашло на остановке? ";
    std::cin >> PassengerComeInBus;
    totalPassenger += PassengerComeInBus;
    moneyTotal += PassengerComeInBus * 20;

    std::cout << "Отправляемся с остановки Три. В салоне  " << totalPassenger << "\n";
    std::cout << "-----------Едем-----------\n";
    std::cout << "Прибываем на остановку Четыре. В салоне  " << totalPassenger << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> PassengerComeOutBus;
    totalPassenger -= PassengerComeOutBus;
    std::cout << "Cколько пассажиров зашло на остановке? ";
    std::cin >> PassengerComeInBus;
    totalPassenger += PassengerComeInBus;
    moneyTotal += PassengerComeInBus * 20;

    std::cout << "Отправляемся с остановки Четыре. В салоне  " << totalPassenger << "\n";
    std::cout << "-----------Едем-----------\n";
    std::cout << "Прибываем на остаановку Пять. В салоне пассажиров: " << totalPassenger << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> PassengerComeOutBus;
    totalPassenger -= PassengerComeOutBus;
    std::cout << "Cколько пассажиров зашло на остановке? ";
    std::cin >> PassengerComeInBus;
    totalPassenger += PassengerComeInBus;
    moneyTotal += PassengerComeInBus;

    driverSalary = moneyTotal / 4.;
    fuelCosts = moneyTotal / 5.;
    tax = moneyTotal / 5.;
    forCarRepairMoney = moneyTotal / 5.;

    std::cout << "Всего заработали: " << moneyTotal << "\n";
    std::cout << "Зарплата водителя: " << driverSalary << "\n";
    std::cout << "Расходы на топливо: " << fuelCosts << "\n";
    std::cout << "Налоги: " << tax << "\n";
    std::cout << "Расходы на ремонт машины: " << forCarRepairMoney  << "\n";
    std::cout << "Итого доход: " << moneyTotal - driverSalary - tax - fuelCosts - forCarRepairMoney;

}