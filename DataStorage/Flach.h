#pragma once
#include<iostream>
#include"IDataStorage.h"



void Flach()
{
	class Flach {

		string Reading;
		string Output;
		string Recording;
		string Delection;
		char FlachMenu;

		Flach() {};
		Flach(string Reading, string Output, string Recording, string delection)
		{
			cout << "¬ы выбрали USB-флеш-накопитель(далее USB)/n,у вас есть выбор из четырЄх вариантов" << endl;
			cin >> FlachMenu;
			switch (FlachMenu)
			{
			case 1:
				cout << "USB,как и почти все носители информации имеет возможность на еЄ считывание,n/ в разных формате " << endl;
				break;
			case 2:
				cout << "USB имеет возможность выводить информацию на внешние устройства/n (монитор,телевизор,«вуковое оборудование)" << endl;
				break;

			case 3:
				cout << "Ќа USB можно записать почти любую информацию,/n до границ его пам€ти" << endl;
				break;

			case 4:
				cout << "—тирание информации с USB(форматирование)может быть полным или быстрым. /n ѕри полном форматировании данные удал€ютс€ без  возможности востановлени€./n ѕри быстром востановление данных возможно." << endl;
				break;

			default:
				cout << "попробовать снова" << endl;
				break;
			}
		}
	};


}