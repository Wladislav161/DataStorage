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

			cout << "�� ������� �������� ������������ ����(DVD)/n ���������� �������� ����������, ����������� � ����� �����, ��� �������� ��������� ���������� � �������� ����./n ��� �������� ��� ������ ��������" << endl;

			cin >> CdMenu;
			switch (CdMenu)
			{
			case 1:
				cout << "������� ������ � ���������� ���������� �������� �������������� ��� ������ ������(������� ���������� � ������� ���������� ������)./n��� � ����� ��� �������� ���������� ����� ����������� �� �� ����������,n/ � ������ ������� " << endl;
				break;

			case 2:
				cout << "����� ���������� ���� ��� ������ (������� ���������� ������)/n " << endl;

				break;

			case 3:
				cout << "�� DVD ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;


			case 4:
				cout << "�������� ���������� � DVD(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;

				break;

			default:
				cout << "����������� �����" << endl;


			}

		}

	};
}