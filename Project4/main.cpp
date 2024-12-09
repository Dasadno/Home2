#include <iostream>
#include <Windows.h>
#include <string>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float check = 0;
	int TomtCount = 0, OninCount = 0, CucuCount = 0;
	int PearCount = 0, OrngCount = 0, ApplCount = 0;
	int PetrCount = 0, garlCount = 0, AprcCount = 0;

	std::string exitChoose;
	int choose1;
	int choose2;
	int count = 0;

	while (exitChoose != "n") {
		std::cout << "Магазин соки Никиты :) \n\n\n\n";
		std::cout << "Список отделов: ";
		std::cout << "1 - Овощной отдел\t2 - Фруктовый отдел\t3 - Отдел чая\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose1;
		system("cls");
		std::cout << "Все цены указанны за литр!\n\n";
		if (choose1 == 1) {
			std::cout << "1 - Томатный сок | 149Руб\t2 - Луковый сок | 149Руб\t3 - Огуречный сок | 149Руб\n\n\nВвод: ";
		}
		else if (choose1 == 2) {
			std::cout << "1 - Яблочный сок | 209Руб\t2 - Апельсиновый сок | 239Руб\t3 - Абрикосовый сок | 169Руб\t4 - Грушевый сок | 199Руб\n\n\nВвод: ";
		}
		else if (choose1 == 3) {
			std::cout << "1 - Чесночный чай | 369Руб\t2 - Петрушевый чай | 369Руб\nПри покупке 3х Литров петрушевого чая дайствует 5% скидка!\n\n\nВвод: ";
		}
		else {
			std::cerr << "Input error";
			return 0;
		}
		std::cin >> choose2;
		std::cout << "\n\n";
		std::cout << "При покупке больше чем на 1300 рублей действует скидка 13%!";

		if (choose1 == 1 && choose2 >= 1 || choose2 <= 3) {
			switch (choose2)
			{
			case 1: check += 149, TomtCount++; break;
			case 2: check += 249, OninCount++; break;
			case 3: check += 149, CucuCount++; break;

			default:
				std::cerr << "Value input error";
				break;
			}
		}

		else if (choose1 == 2 && choose2 >= 1 || choose2 <= 4) {
			switch (choose2)
			{
			case 1: check += 209, ApplCount++; break;
			case 2: check += 239, OrngCount++; break;
			case 3: check += 169, AprcCount++; break;
			case 4: check += 199, PearCount++; break;
			default:
				std::cerr << "Value input error";
				break;
			}
		}
		else if (choose1 == 3 && choose2 >= 1 || choose2 <= 2) {
			switch (choose2)
			{
			case 1: check += 369, garlCount++; break;
			case 2: check += 369, PetrCount++; break;
			default:
				break;
			}
		}
		system("cls");
		std::cout << "Хотите продолжить покупки?(y/n)\n\nВвод:";
		std::cin >> exitChoose;
		if (exitChoose == "y") {
			system("cls");
		}
		else if (exitChoose == "n") {
			if (check >= 1300) {
				check = check - check / 100 * 13;
				std::cout << "Общий чек составил: " << check << "Руб\tВключая скидку 13%!";
			}
			else
			{
				std::cout << "Общий чек составил: " << check;
			}
			break;
		}
		else {
			std::cerr << "Input error";
			Sleep(3000);
			system("cls");
		}


	}



	return 0;
}