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
			cout << "�� ������� USB-����-����������(����� USB)/n,� ��� ���� ����� �� ������ ���������" << endl;
			cin >> FlachMenu;
			switch (FlachMenu)
			{
			case 1:
				cout << "USB,��� � ����� ��� �������� ���������� ����� ����������� �� � ����������,n/ � ������ ������� " << endl;
				break;
			case 2:
				cout << "USB ����� ����������� �������� ���������� �� ������� ����������/n (�������,���������,�������� ������������)" << endl;
				break;

			case 3:
				cout << "�� USB ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;

			case 4:
				cout << "�������� ���������� � USB(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;
				break;

			default:
				cout << "����������� �����" << endl;
				break;
			}
		}
	};


}