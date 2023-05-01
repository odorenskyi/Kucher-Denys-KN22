#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>
#include <bitset>
using namespace std;


void func1() {
    string name = "����� �����,����,�������������,2023";
    string word;
    string krap[18] = {"���", "����", "�� ����", "������", "���", "�� ��", "�������", "�����", "����", "����", "���������", "�������", "��������", "����", "���� ���", "��", "��", "����"};
    //������� ����� � �����
    ifstream finc;
    finc.open("word.txt");
    if(finc.is_open()){
        getline(finc,word);
        finc.close();
    }
    else{
        cout<<"���� �� ��������, ���� ����� ������� ���� � ������(������ � �������� ANSII ��� ��������� ����)";
    }


    ofstream fout;
    fout.open("word2.txt", std::ios::app);
    //�������� �� ������� �����������
    int counter = 0;
    for (int i = 0; i < word.length(); i++) {

        if (word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�' && word[i] != '�') {
            counter++;
        }
    }

    fout << name << "\n";
    fout << "ʳ������ �����������: " << counter << "\n";

    //�������� �� ��������� ����� � ����� � ������� � ���������
    int check=0;
    for (int i =0; i<=17; i++){
        if(word == krap[i]){
           check++;
        }
    }
    if(check!=0){
        fout<<"����� "<<word<<" � � ���������";
    }
    else{
        fout<<"����� "<<word<<" �� �� � ���������";
    }
    fout.close();
}

void func2(){
    ifstream fin;
    fin.open("word.txt", ios::app);
    if(fin.is_open()){
    fin.seekg(0, ios::end);
    int length = fin.tellg();
    fin.seekg(0, ios::beg);
    fin.close();

    // ��������� ����������
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char date[11];
    strftime(date, sizeof(date), "%d.%m.%Y", now);
    string date_str(date);

    // ��������� ���� ��� ��������
    ofstream fout;
    fout.open("word.txt", std::ios::app);

    fout << "\nʳ������ ������� � ����: " << length;
    fout << "\n���� ������ ����������: " << date;
    fout.close();}
    else{
        cout<<"���� �� ��������, ���� ����� ������� ���� � ������(������ � �������� ANSII ��� ��������� ����)";
    }
}
 void func3(){
    ofstream fin;
fin.open("word2.txt", std::ios::binary | std::ios::app);

int x, y, z, b;
cout << "������ ����� �����: ";
cin >> x;
cout << "������ ����� �����: ";
cin >> y;
cout << "������ ���� �����: ";
cin >> z;
cout << "������ ����� b: ";
cin >> b;

// ����������� ����� � 16-�� �������

    fin << "x � 16-�� ������ " << hex << x;
    fin << "\ny � 16-�� ������ " << hex << y;
    fin << "\nz � 16-�� ������ " << hex << z;

// ����� � ������� ���

    string bin = bitset<8>(b).to_string();
    fin << "\nb � ������� ������ " << bin;

fin.close();

}
