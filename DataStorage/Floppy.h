#pragma once
#include<iostream>
#include <string>
#include"IDataStorage.h"

using namespace std;
void Floppy()
{
	class FLoppy {
		string Reading;
		string Output;
		string Recording;
		string Delection;

		void Floppy() {};
		void Floppy(string Reading, string Output, string Recording, string delection)
		{
			char FlopMenu;
			this->Reading = Reading;
			this->Output = Output;
			this->Recording = Recording;
			this->Delection = Delection;


			cout << "�� ������� �������(����� ���),�������������� USB./n �������� ���� �� ������ ���������" << endl;
			cin >> FlopMenu;
			switch (FlopMenu)
			{
			case 1:
				cout << "���,��� � ����� ��� �������� ���������� ����� ����������� �� � ����������,n/ � ������ ������� " << endl;
				break;

				break;

			case 2:
				cout << "��� ����� ����������� �������� ���������� ����������� ������������� ����(���������� �� ������ ��������� ������ ) " << endl;
				break;

			case 3:
				cout << "�� ��� ����� �������� ����� ����� ����������,/n �� ������ ��� ������(� ��������� ������������ ���������)" << endl;

				break;

			case 4:
				cout << "�������� ���������� � ���  �������� ������ �� ������������ ������������" << endl;

				break;

			default:
				cout << "����������� �����" << endl;
				break;


			}
		}
	};
}