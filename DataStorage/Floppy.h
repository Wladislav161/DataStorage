#pragma once
#include<iostream>
#include <string>
#include"IDataStorage.h"

using namespace std;
void Floppy()
{
	class FLoppy {
		string Reading;
		string Output;
		string Recording;
		string Delection;

		void Floppy() {};
		void Floppy(string Reading, string Output, string Recording, string delection)
		{
			char FlopMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;


			cout << "Вы выбрали дискету(далее ГМД),предшественник USB./n Выберите один из четырёх вариантов" << endl;
			cin >> FlopMenu;
			switch (FlopMenu)
			{
			case 1:
				cout << "ГМД,как и почти все носители информации имеет возможность на её считывание,n/ в разных формате " << endl;
				break;

				break;

			case 2:
				cout << "ГМД имеет возможность выводить информацию посредством использования НГМД(Накопитель на гибких магнитных дисках ) " << endl;
				break;

			case 3:
				cout << "На ГМД можно записать почти любую информацию,/n до границ его памяти(к сожалению относительно небольшой)" << endl;

				break;

			case 4:
				cout << "Стирание информации с ГМД  возможно только со специальными устройствами" << endl;

				break;

			default:
				cout << "попробовать снова" << endl;
				break;


			}
		}
	};
}