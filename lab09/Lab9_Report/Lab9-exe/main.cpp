#include <iostream>
#include <Windows.h>
#include <bitset>
#include "Header.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string num = "";

while (true) {

    cout << "������ ���� �������� 1.s 2.f 3.g 4.h ��� ����� �������� j: ";
    cin >> num;
    if (num == "s") {
        s_calculation();
    }
    else if (num == "f") {
        func1();
    }
    else if (num == "g") {
        func2();
    }
    else if (num == "h") {
        func3();
    }
    else if (num == "j" || num == "J") {
        break;
    }
    else {
        cout << "\a������ ������� ��������\n";
    }
}
    return 0;
}

