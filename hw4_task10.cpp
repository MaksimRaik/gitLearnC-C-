#include <iostream>
#include <math.h>

using namespace std;

int main(){

  int DayoftheWeek;

  cout << "Введите Номер Дня недели: ";
  cin >> DayoftheWeek;

  if(DayoftheWeek == 1)
    {
      cout << "***Понедельник***" << endl;
      cout << "Борщ" << endl;
      cout << "Салат с помидорами и огурцами" << endl;
      cout << "Чай" << endl;
    }
  else if(DayoftheWeek == 2)
    {
      cout << "***Вторник***" << endl;
      cout << "Суп Щи" << endl;
      cout << "Пюрешка с котлетками" << endl;
      cout << "Компот с клюквой" << endl;
    }
  else if(DayoftheWeek == 3)
    {
      cout << "***Среда***" << endl;
      cout << "Суп Сырный" << endl;
      cout << "Гречневая каша" << endl;
      cout << "Сок яблочный" << endl;
    }
  else if (DayoftheWeek == 4)
    {
      cout << "***Четверг***" << endl;
      cout << "ПЕЛЬМЕНИ" << endl;
      cout << "Салат Греческий" << endl;
      cout << "Компот вишнёвый" << endl;
    }
  else if(DayoftheWeek == 5)
    {
      cout << "***Пятница***" << endl;
      cout << "Сборня солянка" << endl;
      cout << "Макароны с тушёнкой" << endl;
      cout << "Чай" << endl;
    }
  else if(DayoftheWeek == 6)
    {
      cout << "***Суббота***" << endl;
      cout << "Суп Сырный" << endl;
      cout << "Компот с клюквой" << endl;
      cout << "Макароны с котлетами" << endl;
    }
  else if (DayoftheWeek == 7)
    {
      cout << "***Восресенье***" << endl;
      cout << "ПЕЛЬМЕНИ" << endl;
      cout << "Салат с помидорами и огурцами" << endl;
      cout << "Чай" << endl;
    }

}