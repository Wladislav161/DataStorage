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

			cout << "�� ������� �������-���� (CD) � ���������� �������� ���������� � ���� ������������ ����� � ���������� � ������,./n ��� �������� ��� ������ ��������" << endl;

			cin >> CdMenu;
			switch (CdMenu)
			{
			case 1:
				cout << "��� � ����� ��� �������� ���������� ����� ����������� �� �� ����������,n/ � ������ ������� " << endl;
				break;

			case 2:
				cout << "����� ���������� ���� ��� ������ (������� ���������� ������)/n " << endl;

				break;

			case 3:
				cout << "�� ������ ����� �� CD ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;


			case 4:
				cout << "�������� ���������� � CD(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;

				break;

			default:
				cout << "����������� �����" << endl;


			}

		}

	};
}



