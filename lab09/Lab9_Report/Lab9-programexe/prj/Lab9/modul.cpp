#include <iostream>
#include <Windows.h>
#include <bitset>

using namespace std;

float func1(){
cout << "������ ���� ���� �������" << endl;
    float sum;
    float sell;
    cin >> sum;
    if( sum <100){
        sell = 0.05;
    }
    else if(sum>=100 && sum<200){
        sell = 0.07;
    }
    else if(sum>=200 && sum<300){
        sell = 0.09;
    }
    else if(sum>=300 && sum<400){
        sell = 0.12;
    }
    else if(sum>=400 && sum<500){
        sell = 0.15;
    }
    else if(sum>=500 && sum<1000){
        sell = 0.2;
    }
    else if(sum>=1000){
        sell = 0.25;
    }
    float price = sum - (sum* sell);
    cout << "���� ������ " << sell*100 << "% \n";
    cout << "���� ���� � ����������� ������ " << price;

    return 0;
}

float func2(){
    int ukr_size,fr_size,eng_size;
    string world_s;
    cout << "������ ��� ����� ����� � ��������� ������: 44,46,48,50,52,54 ";
    cin >> ukr_size;

    switch(ukr_size){
    case 44:
        fr_size = 2;
        eng_size = 34;
        world_s = "S";
        break;
    case 46:
        fr_size = 3;
        eng_size = 36;
        world_s = "M";
        break;
    case 48:
        fr_size = 4;
        eng_size = 38;
        world_s = "L";
        break;
    case 50:
        fr_size = 5;
        eng_size = 40;
        world_s = "XL";
        break;

    case 52:
        fr_size = 6;
        eng_size = 42;
        world_s = "XXL";
        break;
    case 54:
        eng_size = 44;
        world_s ="XXXL";
    }

    cout << "��� ����� � ���������� ������ " <<eng_size <<"\n";
    cout << "��� ����� � ����������� ������ " <<fr_size <<"\n";
    cout << "��� ����� � ��������� ������ " <<world_s <<"\n";
    return 0;

}
int func3(){
    int n;
    cout << "������ ����� �� 0 �� 190550: ";
    cin >> n;

    // ��������� �������� ��� D3 ����� N
    int bit_d3 = (n >> 3) & 1;
    // ������ ������� �������� ���� �� ������� � ���� N
    int count_zeros = 0, count_ones = 0;
    for (int i = 0; i < 32; i++) {
        if ((n >> i) & 1) {
            count_ones++;
        } else {
            count_zeros++;
        }
    }
    // ��������� ��������� ����� ����� ������
    int result = (bit_d3 == 1) ? count_zeros : count_ones;
    cout << "���������: " << result << endl;
    return 0;

}

int s_calculation(){
    int x,y,z;
    cout<< "������ ����� �����";
    cin>>x;
    cout<< "������ ����� �����";
    cin>>y;
    cout<< "������ ����� �����";
    cin>>z;
     cout <<"x � 16 ������ " << x<<endl;
     cout <<"y � 16 ������ " << y<<endl;
     cout <<"z � 16 ������ " << z<<endl<<endl;

     cout <<"x � 16 ������ " << hex << x<<endl;
     cout <<"y � 16 ������ " << hex << y<<endl;
     cout <<"z � 16 ������ " << hex << z<<endl;


     return 0;
}

