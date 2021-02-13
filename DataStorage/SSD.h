#pragma once
#include<iostream>
#include"IDataStorage.h"

void SSD()
{
	class SSD :IStorage {
		string Reading;
		string Output;
		string Recording;
		string Delection;

		SSD() {};
		SSD(string Reading, string Output, string Recording, string delection)
		{
			char SSDMenu;
			cout << "¬ы выбрали твердотельный накопитель(далее SSD),у вас есть выбор из четырЄх вариантов" << endl;
			cin >> SSDMenu;
			switch (SSDMenu)
			{
			case 1:
				cout << "SSD,как и почти все носители информации имеет возможность на ЄЄ считывание,n/ в разных формате " << endl;
				break;
			case 2:
				cout << "SSD имеет возможность выводить информацию на внешние устройства/n (монитор,принтер,«вуковое оборудование)" << endl;
				break;

			case 3:
				cout << "Ќа SSD можно записать почти любую информацию,/n до границ его пам€ти" << endl;
				break;

			case 4:
				cout << "—тирание информации с SSD(форматирование)может быть полным или быстрым. /n ѕри полном форматировании данные удал€ютс€ без  возможности востановлени€./n ѕри быстром востановление данных возможно." << endl;
				break;

			default:
				cout << "попробовать снова" << endl;
				break;
			}
		}
	};

}