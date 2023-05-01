#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>
#include <bitset>
#include "Header.h "
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num = 0;
    cout << "яке завданн€ ви хочете виконати ?(1,2,3)";
    cin >> num;
    switch(num){
        case 1:
            func1();
            break;
        case 2:
            func2();
            break;
        case 3:
            func3();
            break;
        default:
        cout << "ѕомилка: введене число не в≥дпов≥даЇ жодному завданню." << endl;
        break;
    }

    return 0;
}
