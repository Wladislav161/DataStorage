#pragma once
#include<iostream>
#include"IDataStorage.h"


using namespace std;

void CD() {
	class CD :IStorage
	{
		string Reading;
		string Output;
		string Recording;
		string Delection;

		CD() {};
		CD(string Reading, string Output, string Recording, string delection)
		{

			char CdMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;

			cout << "Вы выбрали Компакт-диск (CD) — оптический носитель информации в виде пластикового диска с отверстием в центре,./n Вам доступно все четыре варианта" << endl;

			cin >> CdMenu;
			switch (CdMenu)
			{
			case 1:
				cout << "Как и почти все носители информации имеет возможность на ёё считывание,n/ в разных формате " << endl;
				break;

			case 2:
				cout << "Вывод информации идет при помощи (Привода оптических дисков)/n " << endl;

				break;

			case 3:
				cout << "На данное время на CD можно записать почти любую информацию,/n до границ его памяти" << endl;
				break;


			case 4:
				cout << "Стирание информации с CD(форматирование)может быть полным или быстрым. /n При полном форматировании данные удаляются без  возможности востановления./n При быстром востановление данных возможно." << endl;

				break;

			default:
				cout << "попробовать снова" << endl;


			}

		}

	};
}



