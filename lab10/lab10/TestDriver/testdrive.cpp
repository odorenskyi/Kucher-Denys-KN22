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
    getline(fin, line); // пропуск першої строки
    getline(fin, line); // строка з числом приголосних
    if (line != "Кількість приголосних: 5") {
        cout << "False неправильна кількість приголосних";
        fin.close();
        return;
    }
    getline(fin, line); // строка з перевіркою краплинки
    if (line != "Слово щасливий є у краплинці") {
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
    getline(fin, line); // пропуск першої строки
    getline(fin, line); // строка з числом приголосних
    if (line != "Кількість приголосних: 4") {
        cout << "False неправильна кількість приголосних";
        fin.close();
        return;
    }
    getline(fin, line); // строка з перевіркою краплинки
    if (line != "Слова Привіт не має у краплинці") {
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
    getline(fin, line); // пропуск першої строки
    getline(fin, line); // строка з числом символів
    if (line != "Кількість символів у файлі: 6") {
        cout << "False неправильна кількість символів";
        fin.close();
        return;
    }
    getline(fin, line); // строка з перевіркою дати
    if (line != "Дата допису інформації: 01.05.2023") {
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
    if (line != "x в 16-ій системі c") {
        cout << "False неправильний символ x";
        fin.close();
        return;
    }

    getline(fin, line);
    if (line != "y в 16-ій системі f") {
        cout << "False неправильний символ y";
        fin.close();
        return;
    }
    getline(fin, line);
    if (line != "z в 16-ій системі 8") {
        cout << "False неправильний символ z";
        fin.close();
        return;
    }

    getline(fin, line); // строка з перевіркою дати
    if (line != "b в двійковій системі 00001000") {
        cout << "False неправильний символ b";
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
    cout << "Яке тестування ви хочете виконати ?(1,2,3,4,5,6,7)";
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
