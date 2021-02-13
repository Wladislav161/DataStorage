#pragma once
#include<iostream>
#include"IDataStorage.h"

void MD() {
	class MD
	{
		string Reading;
		string Output;
		string Recording;
		string Delection;

		MD() {};
		MD(string Reading, string Output, string Recording, string delection)
		{

			char MdMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;

			cout << "Вы выбрали MiniDisk (MD) — оптический носитель информации в виде пластикового диска с отверстием в центре,./n Вам доступно все четыре варианта" << endl;

			cin >> MdMenu;
			switch (MdMenu)
			{
			case 1:
				cout << "Процесс записи и считывания информации которого осуществляется при помощи лазера(который содержится в Приводе оптических дисков)./n Его можно использовать для хранения любого вида цифровых данных./n Наиболее широко MD используются для хранения аудиоинформации" << endl;
				break;

			case 2:
				cout << "Вывод информации идет при помощи (Привода оптических дисков)/n " << endl;

				break;

			case 3:
				cout << "На  MD можно записать почти любую информацию,/n до границ его памяти" << endl;
				break;


			case 4:
				cout << "Стирание информации с MD(форматирование)может быть полным или быстрым. /n При полном форматировании данные удаляются без  возможности востановления./n При быстром востановление данных возможно." << endl;

				break;

			default:
				cout << "попробовать снова" << endl;


			}

		}

	};
}