#pragma once
#include<iostream>
#include"IDataStorage.h"


void DVD() {
	class DVD:IStorage
	{
		string Reading;
		string Output;
		string Recording;
		string Delection;

		DVD() {};
		DVD(string Reading, string Output, string Recording, string delection)
		{

			char CdMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;

			cout << "Вы выбрали Цифровой многоцелевой диск(DVD)/n оптический носитель информации, выполненный в форме диска, для хранения различной информации в цифровом виде./n Вам доступно все четыре варианта" << endl;

			cin >> CdMenu;
			switch (CdMenu)
			{
			case 1:
				cout << "Процесс записи и считывания информации которого осуществляется при помощи лазера(который содержится в Приводе оптических дисков)./nКак и почти все носители информации имеет возможность на ёё считывание,n/ в разных формате " << endl;
				break;

			case 2:
				cout << "Вывод информации идет при помощи (Привода оптических дисков)/n " << endl;

				break;

			case 3:
				cout << "На DVD можно записать почти любую информацию,/n до границ его памяти" << endl;
				break;


			case 4:
				cout << "Стирание информации с DVD(форматирование)может быть полным или быстрым. /n При полном форматировании данные удаляются без  возможности востановления./n При быстром востановление данных возможно." << endl;

				break;

			default:
				cout << "попробовать снова" << endl;


			}

		}

	};
}