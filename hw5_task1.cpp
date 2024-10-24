#include <iostream>
#include <math.h>

using namespace std;

int main(){

double xCoordinate;
double yCoordinate;

cout << "Введите координаты точки: ";
cin >> xCoordinate >> yCoordinate;
cout << "Координаты точки ("<< xCoordinate << "," << yCoordinate << ")" << endl;

if (xCoordinate > 0){
  if(yCoordinate > 0){
  cout << "Точка находится в первой четверти" << endl;
  }
  else{
  cout << "Точка находится в четвертой четверти" << endl;
  }

}
if(xCoordinate < 0){
  if(yCoordinate > 0){
    cout << "Точка находится во второй четверти" << endl;
    }
    else{
    cout << "Точка находится в третьей четверти" << endl;
    }
}

}