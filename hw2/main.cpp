#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance, distance1, price92 =39, price95 = 58, price98 = 84;
	int time, hours, minutes, seconds, hours1, minutes1, seconds1, consum;
	//������ 1--------------------------------------------------------------------------
	std::cout << "������� ���������� �� ���������: ";
	std::cin >> distance;
	std::cout << "������� ����� � �����: ";
	std::cin >> time;
	std::cout << "��� ���� ����� �� ��������� " << distance/time << "��/�\n";

	//������ 2--------------------------------------------------------------------------
	std::cout << "\n������� ������ ����� ������������� �������\n";
	std::cout << "����: ";
	std::cin >> hours;
	std::cout << "������: ";
	std::cin >> minutes;
	std::cout << "�������: ";
	std::cin >> seconds;
	std::cout << "\n������� ����� ����� ������������� �������\n";
	std::cout << "����: ";
	std::cin >> hours1;
	std::cout << "������: ";
	std::cin >> minutes1;
	std::cout << "�������: ";
	std::cin >> seconds1;
	int startTime = hours * 3600 + minutes * 60 + seconds;
	int endTime = hours1 * 3600 + minutes1 * 60 + seconds1;
	double price = (endTime-startTime)/60 * 2;
	std::cout << "���� ������ ����� ������ " << price << " ������";

	//������ 3-------------------------------------------------------------------------

	std::cout << "\n������� ���������: ";
	std::cin >> distance1;
	std::cout << "������� ������ ������� �� 100��: ";
	std::cin >> consum;
	double cost1 = (distance1 / 100) * consum * price92;
	double cost2 = (distance1 / 100) * consum * price95;
	double cost3 = (distance1 / 100) * consum * price98;

	std::cout << "\n������������� ������� ��������� �������:\n";
	std::cout << "----------------------------------------\n";
	std::cout << "��� �������\t��������� �������\n";
	std::cout << "92-� ������:\t" << cost1 << "�.\n";
	std::cout << "95-� ������:\t" << cost2 << "�.\n";
	std::cout << "98-� ������:\t" << cost3 << "�.\n";

	return 0;
}