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
    cout << "��� �������� �� ������ �������� ? 1.������ �� ������� ������� 2.�������� �� ����� 3. �������� ���� ������� ������ �� ������� � ��������� ��������� �����"<< endl;
    cin >> n;
    switch (n){
    case 1:
        cout << "������: " << dect.getWidth() << endl;
        cout << "�������: " << dect.getHeight() << endl;
        break;
    case 2:
        cout << "�����: " << dect.getArea() << endl;
        cout << "��������: " << dect.getPerimeter() << endl;
        break;
    case 3:
        cout <<"������� �������� ������ �� �������"<<endl;
        float newHeight, newWidth;

        cin >> newHeight;
        dect.setHeight(newHeight);
        cin >> newWidth;
        dect.setWidth(newWidth);

        cout << "��� �������� ����� �� ���������"<<endl;
        cout << "�����: " << dect.getArea() << endl;
        cout << "��������: " << dect.getPerimeter() << endl;
        break;
    default:
        cout<<"���������� ���, ���� ����� ������������ �������� �� ��������� �� ���";
        break;

    }



    return 0;
}
