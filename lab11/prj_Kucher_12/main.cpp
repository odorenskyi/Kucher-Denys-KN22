#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <Windows.h>
#include "../ModulesPylypenko.h"
#include "../ModulesKucher.h"
#include "../ModulesSkok.h"
#include "../struct_type_project_12.h"

using namespace std;

int main()
{
    vector<Benefits> note; // Здесь хранятся все записи
    string file_name = "dividnuk.txt"; // Имя файл

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Benefits notes;  // Створення нової структури Benefits для збереження даних з рядка

    ifstream file("dividnuk.txt");  // Відкриття файлу "dividnuk.txt" для зчитування
    if (file.is_open()) {  // Перевірка, чи відкриття файлу пройшло успішно
        string line;  // Змінна для збереження рядка зчитаного з файлу
        while (std::getline(file, line)) {  // Цикл, який зчитує рядки з файлу по одному

            std::stringstream ss(line);  // Створення потоку stringstream для подальшого розбиття рядка на окремі частини
            string item;  // Змінна для збереження окремих частин рядка
            std::getline(ss, item, ',');  // Розбиття рядка за допомогою ',' як роздільника і збереження першої частини в змінну item
            notes.code_ben = std::stoi(item);  // Перетворення змінної item з рядкового типу в ціле число і збереження в поле code_ben структури notes

            std::getline(ss, notes.content_ben, ',');
            std::getline(ss, notes.document_ben, ',');
            std::getline(ss, notes.num_doc_ben, ',');
            std::getline(ss, notes.date_doc_ben, ',');
            std::getline(ss, notes.date_start_ben, ',');
            std::getline(ss, notes.date_end_ben, ',');
            std::getline(ss, notes.destination_sign_ben, ',');
            std::getline(ss, notes.coment_ben, ',');


            note.push_back(notes);  // Додавання структури notes до вектору note
        }
        file.close();
    } else {
        cout << "Файл не знайдено.\n";
        return 1;
    }

    int choice;
    do {
        cout << "Оберіть запит:\n";
        cout << "1. Пошук по коду пільги\n";
        cout << "2. Виведення всього довідника\n";
        cout << "3. Додання нового запису в довідник\n";
        cout << "4. Видалення запису з довідника\n";
        cout << "5. Завершення роботи та запис даних у файл\n";
        cin >> choice;

        switch (choice) {
            case 1:
                int code;
                cout << "Введіть код пільги: ";
                cin >> code;
                poshuk_kod(note, code);
                break;
            case 2:
                cout <<"натисніть 0(увесь довідник у файл) чи 1(на екран)";
                int button;
                cin>> button;
                if(button == 0){
                    cout <<"введіть імя в файл який хочете записати довідник";
                    string filename;
                    cin >> filename;
                    filename = filename+".txt";
                    File(note,filename);
                }
                else if (button ==1){
                    Screen(note);
                }

                break;
            case 3:
                add_new_data(note, "dividnuk.txt");
                break;
            case 4:
                delete_data(note, "dividnuk.txt");
                break;
            case 5:
                end_file(note, "dividnuk.txt");
                break;
            default:
                cout << "Неправильна опція. Спробуйте знову.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
