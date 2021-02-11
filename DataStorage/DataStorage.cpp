
#include<iostream>
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
            break;
        case '2': // 2. SSD
            break;
        case '3': // 3. Floppy
            break;
        case '4': // 4. DVD
            break;
        case '5': // 5. CD
            break;
        case '6': // 6. Flach
            break;
        case '7': // 7. MD
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
