
#include<iostream>
#include<string>


#include"IDataStorage.h"
#include "HDD.h"
#include"MD.h"
#include "SSD.h"
#include"Floppy.h"
#include"Flach.h"
#include"DVD.h"
#include"CD.h"
#include"CLI.h"

using namespace std;

int main()
{
    setlocale (LC_ALL,"rus");

    bool exit = false;
    char selectMenu;

    PrintWelcome();

    do {
        PrintMenu();
        cin >> selectMenu;

        switch (selectMenu) {
        case '1': // 1. HDD
            HDD();
            break;
        case '2': // 2. SSD
            SSD();
            break;
        case '3': // 3. Floppy
            void Floppy() ;
            break;
        case '4': // 4. DVD
            DVD();
            break;
        case '5': // 5. CD
            CD() ;
            break;
        case '6': // 6. Flach
            Flach() ;
            break;
        case '7': // 7. MD
            MD();
            break;

        case '0': // 0. Выход
            exit = true;
            break;
        default:
            cout << "Повторите ввод!" << endl;
            break;
        }
    } while (!exit);

    cout << "До новых встреч!" << endl;
}
