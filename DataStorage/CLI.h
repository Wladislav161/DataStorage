#pragma once

#include <iostream>
#include <string>
#include"HDD.h"



using namespace std;

void PrintWelcome()
{
    cout << "=======================" << endl;
    cout << "====== DataStage ======" << endl;
    cout << "= Ovscharenko Wladislav =" << endl;    
    cout << "=======================" << endl;
    cout << endl;
}

void PrintMenu()
{
    cout << "Меню:" << endl;
    cout << "1. HDD" << endl;
    cout << "2. SDD" << endl;
    cout << "3. Flopy" << endl;
    cout << "4. DVD" << endl;
    cout << "5. CD" << endl;
    cout << "6. Flach" << endl;
    cout << "7. MD" << endl;
    cout << "0. Выход" << endl;
}

