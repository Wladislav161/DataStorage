#pragma once
#include<iostream>
#include"IDataStorage.h"

void SSD()
{
	class SSD :IStorage {
		string Reading;
		string Output;
		string Recording;
		string Delection;

		SSD() {};
		SSD(string Reading, string Output, string Recording, string delection)
		{
			char SSDMenu;
			cout << "�� ������� ������������� ����������(����� SSD),� ��� ���� ����� �� ������ ���������" << endl;
			cin >> SSDMenu;
			switch (SSDMenu)
			{
			case 1:
				cout << "SSD,��� � ����� ��� �������� ���������� ����� ����������� �� �� ����������,n/ � ������ ������� " << endl;
				break;
			case 2:
				cout << "SSD ����� ����������� �������� ���������� �� ������� ����������/n (�������,�������,�������� ������������)" << endl;
				break;

			case 3:
				cout << "�� SSD ����� �������� ����� ����� ����������,/n �� ������ ��� ������" << endl;
				break;

			case 4:
				cout << "�������� ���������� � SSD(��������������)����� ���� ������ ��� �������. /n ��� ������ �������������� ������ ��������� ���  ����������� �������������./n ��� ������� ������������� ������ ��������." << endl;
				break;

			default:
				cout << "����������� �����" << endl;
				break;
			}
		}
	};

}