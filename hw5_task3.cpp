#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double firstCarWeight, secondCarWeight, thirdCarWeigh, fourthCarWeight;
    int acceptableWeight = 1200;
    string answerYes = "Да";
    string answerNo = "Нет"; 
    
    cout << "Вес первой машины" << endl;
    cin >> firstCarWeight;
    cout << "Вес второй машины" << endl;
    cin >> secondCarWeight;
    cout << "Вес третьей машины" << endl;
    cin >> thirdCarWeigh;
    cout << "Вес четвертой машины" << endl;
    cin >> fourthCarWeight;

    if (firstCarWeight >= acceptableWeight or secondCarWeight >= acceptableWeight or thirdCarWeigh >= acceptableWeight or fourthCarWeight >= acceptableWeight){

        cout << answerYes << endl;

    }
    else{
456
        cout << answerNo << endl;
    }

    return 0;


}