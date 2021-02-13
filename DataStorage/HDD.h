#pragma once
#include<iostream>
#include<string>
#include"IDataStorage.h"

using  namespace std;
void HDD(){
class HDD :IStorage
{
	string Reading;
	string Output;
	string Recording;
	string Delection;
	
		HDD() {};
		HDD(string Reading, string Output, string Recording, string delection)
		{

			char HddMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;

			cout << "¬ы выбрали жесткий диск./n ¬ам доступно все четыре варианта" << endl;

			cin >> HddMenu;
			switch (HddMenu)
			{
			case 1:
				cout << "∆есткий диск,как и почти все носители информации имеет возможность на ЄЄ считывание,n/ в разных формате " << endl;
				break;

			case 2:
				cout << "∆есткий диск имеет возможность выводить информацию на внешние устройства/n (монитор,принтер,«вуковое оборудование)" << endl;

				break;

			case 3:
				cout << "Ќа жеский диск можно записать почти любую информацию,/n до границ его пам€ти" << endl;
				break;


			case 4:
				cout << "—тирание информации с жесткого диска(форматирование)может быть полным или быстрым. /n ѕри полном форматировании данные удал€ютс€ без  возможности востановлени€./n ѕри быстром востановление данных возможно." << endl;

				break;

			default:
				cout << "попробовать снова" << endl;


			}

		}

	};
}
