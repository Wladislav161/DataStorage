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

			cout << "�� ������� ������� ����./n ��� �������� ��� ������ ��������" << endl;

			cin >> HddMenu;
			switch (HddMenu)
			{
			case 1:
				cout << "������� ����,��� � ����� ��� �������� ���������� ����� ����������� �� �� ����������,n/ � ������ ������� " << endl;
				break;

			case 2:
				cout << "������� ���� ����� ����������� �������� ���������� �� ������� ����������/n (�������,�������,�������� ������������)" << endl;

				break;

			case 3:
				cout << "�� ������ ���� ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;


			case 4:
				cout << "�������� ���������� � �������� �����(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;

				break;

			default:
				cout << "����������� �����" << endl;


			}

		}

	};
}
