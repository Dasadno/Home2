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
		std::cout << "������� ���� ������ :) \n\n\n\n";
		std::cout << "������ �������: ";
		std::cout << "1 - ������� �����\t2 - ��������� �����\t3 - ����� ���\n\n";
		std::cout << "����: ";
		std::cin >> choose1;
		system("cls");
		std::cout << "��� ���� �������� �� ����!\n\n";
		if (choose1 == 1) {
			std::cout << "1 - �������� ��� | 149���\t2 - ������� ��� | 149���\t3 - ��������� ��� | 149���\n\n\n����: ";
		}
		else if (choose1 == 2) {
			std::cout << "1 - �������� ��� | 209���\t2 - ������������ ��� | 239���\t3 - ����������� ��� | 169���\t4 - �������� ��� | 199���\n\n\n����: ";
		}
		else if (choose1 == 3) {
			std::cout << "1 - ��������� ��� | 369���\t2 - ���������� ��� | 369���\n��� ������� 3� ������ ����������� ��� ��������� 5% ������!\n\n\n����: ";
		}
		else {
			std::cerr << "Input error";
			return 0;
		}
		std::cin >> choose2;
		std::cout << "\n\n";
		std::cout << "��� ������� ������ ��� �� 1300 ������ ��������� ������ 13%!";

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
		std::cout << "������ ���������� �������?(y/n)\n\n����:";
		std::cin >> exitChoose;
		if (exitChoose == "y") {
			system("cls");
		}
		else if (exitChoose == "n") {
			if (check >= 1300) {
				check = check - check / 100 * 13;
				std::cout << "����� ��� ��������: " << check << "���\t������� ������ 13%!";
			}
			else
			{
				std::cout << "����� ��� ��������: " << check;
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