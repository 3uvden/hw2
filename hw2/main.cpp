#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance, distance1, price92 =39, price95 = 58, price98 = 84;
	int time, hours, minutes, seconds, hours1, minutes1, seconds1, consum;
	//Задача 1--------------------------------------------------------------------------
	std::cout << "Введите расстояние до аэропорта: ";
	std::cin >> distance;
	std::cout << "Введите время в часах: ";
	std::cin >> time;
	std::cout << "Вам надо ехать со скоростью " << distance/time << "км/ч\n";

	//Задача 2--------------------------------------------------------------------------
	std::cout << "\nВведите начало время использования скутера\n";
	std::cout << "Часы: ";
	std::cin >> hours;
	std::cout << "Минуты: ";
	std::cin >> minutes;
	std::cout << "Секунды: ";
	std::cin >> seconds;
	std::cout << "\nВведите конец время использования скутера\n";
	std::cout << "Часы: ";
	std::cin >> hours1;
	std::cout << "Минуты: ";
	std::cin >> minutes1;
	std::cout << "Секунды: ";
	std::cin >> seconds1;
	int startTime = hours * 3600 + minutes * 60 + seconds;
	int endTime = hours1 * 3600 + minutes1 * 60 + seconds1;
	double price = (endTime-startTime)/60 * 2;
	std::cout << "Ваша поезда будет стоить " << price << " гривен";

	//Задача 3-------------------------------------------------------------------------

	std::cout << "\nВведите растояние: ";
	std::cin >> distance1;
	std::cout << "Введите расход бензина на 100км: ";
	std::cin >> consum;
	double cost1 = (distance1 / 100) * consum * price92;
	double cost2 = (distance1 / 100) * consum * price95;
	double cost3 = (distance1 / 100) * consum * price98;

	std::cout << "\nСравнительная таблица стоимости поездки:\n";
	std::cout << "----------------------------------------\n";
	std::cout << "Вид бензина\tСтоимость поездки\n";
	std::cout << "92-й бензин:\t" << cost1 << "р.\n";
	std::cout << "95-й бензин:\t" << cost2 << "р.\n";
	std::cout << "98-й бензин:\t" << cost3 << "р.\n";

	return 0;
}