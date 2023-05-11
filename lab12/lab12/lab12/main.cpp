#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;



int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    dectangle dect(5,10);
    int n;
    cout << "Яке завдання ви хочете виконати ? 1.Висота та довжина обьекту 2.Периметр та площі 3. Внесення своїх значень висоти та довжини і отримання оновлених даних"<< endl;
    cin >> n;
    switch (n){
    case 1:
        cout << "Висота: " << dect.getWidth() << endl;
        cout << "Довжина: " << dect.getHeight() << endl;
        break;
    case 2:
        cout << "Площа: " << dect.getArea() << endl;
        cout << "Периметр: " << dect.getPerimeter() << endl;
        break;
    case 3:
        cout <<"Заміність значення висоти та довжини"<<endl;
        float newHeight, newWidth;

        cin >> newHeight;
        dect.setHeight(newHeight);
        cin >> newWidth;
        dect.setWidth(newWidth);

        cout << "Нові значення площі та периметра"<<endl;
        cout << "Площа: " << dect.getArea() << endl;
        cout << "Периметр: " << dect.getPerimeter() << endl;
        break;
    default:
        cout<<"Неправильні дані, будь ласка перезапустіть програму та спробуйте ще раз";
        break;

    }



    return 0;
}
