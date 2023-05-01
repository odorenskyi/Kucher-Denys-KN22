#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>
#include <bitset>

using namespace std;
void test1(){
    ifstream fin;
    fin.open("./prj/word2.txt");
    string line;
    getline(fin, line); // ������� ����� ������
    getline(fin, line); // ������ � ������ �����������
    if (line != "ʳ������ �����������: 5") {
        cout << "False ����������� ������� �����������";
        fin.close();
        return;
    }
    getline(fin, line); // ������ � ��������� ���������
    if (line != "����� �������� � � ���������") {
        cout << "false";
        fin.close();
        return;
    }
    fin.close();
    cout << "passed";

}
void test2(){
    ifstream fin;
    fin.open("./prj/word.txt");
    if(!fin.is_open()){
        cout<<"passed";
    }
    else{
        cout<<"false";
    }
}
void test3(){
    ifstream fin;
    fin.open("./prj/word2.txt");
    string line;
    getline(fin, line); // ������� ����� ������
    getline(fin, line); // ������ � ������ �����������
    if (line != "ʳ������ �����������: 4") {
        cout << "False ����������� ������� �����������";
        fin.close();
        return;
    }
    getline(fin, line); // ������ � ��������� ���������
    if (line != "����� ����� �� �� � ���������") {
        cout << "false";
        fin.close();
        return;
    }
    fin.close();
    cout << "passed";
}
void test4(){
    ifstream fin;
    fin.open("./prj/word.txt");
    string line;
    getline(fin, line); // ������� ����� ������
    getline(fin, line); // ������ � ������ �������
    if (line != "ʳ������ ������� � ����: 6") {
        cout << "False ����������� ������� �������";
        fin.close();
        return;
    }
    getline(fin, line); // ������ � ��������� ����
    if (line != "���� ������ ����������: 01.05.2023") {
        cout << "false";
        fin.close();
        return;
    }
    fin.close();
    cout << "passed";
}
void test5(){
    ifstream fin;
    fin.open("./prj/word.txt");
    if(!fin.is_open()){
        cout<<"passed";
    }
    else{
        cout<<"false";
    }

}
void test6(){
    ifstream fin;
    fin.open("./prj/word2.txt");
    string line;
    getline(fin, line);
    if (line != "x � 16-�� ������ c") {
        cout << "False ������������ ������ x";
        fin.close();
        return;
    }

    getline(fin, line);
    if (line != "y � 16-�� ������ f") {
        cout << "False ������������ ������ y";
        fin.close();
        return;
    }
    getline(fin, line);
    if (line != "z � 16-�� ������ 8") {
        cout << "False ������������ ������ z";
        fin.close();
        return;
    }

    getline(fin, line); // ������ � ��������� ����
    if (line != "b � ������� ������ 00001000") {
        cout << "False ������������ ������ b";
        fin.close();
        return;
    }
    fin.close();
    cout << "passed";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num = 0;
    cout << "��� ���������� �� ������ �������� ?(1,2,3,4,5,6,7)";
    cin >> num;
    switch(num){
        case 1:
            test1();
            break;
        case 2:
            test2();
            break;
        case 3:
            test3();
            break;
        case 4:
            test4();
            break;
        case 5:
            test5();
            break;
        case 6:
            test6();
            break;

}
return 0;
}
