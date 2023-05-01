#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <time.h>
#include <bitset>
using namespace std;


void func1() {
    string name = "Кучер Денис,ЦНТУ,Кропивницький,2023";
    string word;
    string krap[18] = {"про", "себе", "не кажи", "добрих", "слів", "бо має", "сказане", "таємну", "силу", "кажи", "впевнений", "сильний", "щасливий", "буде", "саме так", "як", "ти", "хотів"};
    //читання слова з файлу
    ifstream finc;
    finc.open("word.txt");
    if(finc.is_open()){
        getline(finc,word);
        finc.close();
    }
    else{
        cout<<"Файл не знайдено, будь ласка створіть файл з словом(бажано у кодіровці ANSII для української мови)";
    }


    ofstream fout;
    fout.open("word2.txt", std::ios::app);
    //перевірка на кількість приголосних
    int counter = 0;
    for (int i = 0; i < word.length(); i++) {

        if (word[i] != 'а' && word[i] != 'е' && word[i] != 'є' && word[i] != 'и' && word[i] != 'і' && word[i] != 'Ї' && word[i] != 'о' && word[i] != 'у' && word[i] != 'я' && word[i] != 'ю') {
            counter++;
        }
    }

    fout << name << "\n";
    fout << "Кількість приголосних: " << counter << "\n";

    //перевірка на входження слова в масив з словами з краплинки
    int check=0;
    for (int i =0; i<=17; i++){
        if(word == krap[i]){
           check++;
        }
    }
    if(check!=0){
        fout<<"Слово "<<word<<" є у краплинці";
    }
    else{
        fout<<"Слова "<<word<<" не має у краплинці";
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

    // додаткова інформація
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char date[11];
    strftime(date, sizeof(date), "%d.%m.%Y", now);
    string date_str(date);

    // відкриваємо файл для дозапису
    ofstream fout;
    fout.open("word.txt", std::ios::app);

    fout << "\nКількість символів у файлі: " << length;
    fout << "\nДата допису інформації: " << date;
    fout.close();}
    else{
        cout<<"Файл не знайдено, будь ласка створіть файл з словом(бажано у кодіровці ANSII для української мови)";
    }
}
 void func3(){
    ofstream fin;
fin.open("word2.txt", std::ios::binary | std::ios::app);

int x, y, z, b;
cout << "Введіть перше число: ";
cin >> x;
cout << "Введіть друге число: ";
cin >> y;
cout << "Введіть третє число: ";
cin >> z;
cout << "Введіть число b: ";
cin >> b;

// конвертация чисел в 16-ую систему

    fin << "x в 16-ій системі " << hex << x;
    fin << "\ny в 16-ій системі " << hex << y;
    fin << "\nz в 16-ій системі " << hex << z;

// число в двоічний код

    string bin = bitset<8>(b).to_string();
    fin << "\nb в двійковій системі " << bin;

fin.close();

}
