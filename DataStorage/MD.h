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

			cout << "�� ������� MiniDisk (MD) � ���������� �������� ���������� � ���� ������������ ����� � ���������� � ������,./n ��� �������� ��� ������ ��������" << endl;

			cin >> MdMenu;
			switch (MdMenu)
			{
			case 1:
				cout << "������� ������ � ���������� ���������� �������� �������������� ��� ������ ������(������� ���������� � ������� ���������� ������)./n ��� ����� ������������ ��� �������� ������ ���� �������� ������./n �������� ������ MD ������������ ��� �������� ���������������" << endl;
				break;

			case 2:
				cout << "����� ���������� ���� ��� ������ (������� ���������� ������)/n " << endl;

				break;

			case 3:
				cout << "��  MD ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;


			case 4:
				cout << "�������� ���������� � MD(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;

				break;

			default:
				cout << "����������� �����" << endl;


			}

		}

	};
}