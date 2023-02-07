#include "main.h"
#include "math_functions.h"

#include <iostream>


int main() {
	setlocale(LC_ALL, "ru");

	long long int x{};
	long long int y{};
	
	int select{};
	MainMenu menu = MainMenu::выход;

	while (true) {
		std::cout << "\tМатематические функции.\n\n\n";

		std::cout << "Введите первое число: ";
		std::cin >> x;

		std::cout << "Введите второе число: ";
		std::cin >> y;

		std::cout << "Выберите операцию (0 - выход, 1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> select;
		menu = static_cast<MainMenu>(select);

		if (menu == MainMenu::выход) {
			break;
		}
		else if (menu == MainMenu::сложение) {
			system("cls");
			std::cout << "---------------------------------------------------------------------" << std::endl;
			std::cout << x << " + " << y << " = " << sum(x, y) << std::endl;
			std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
		}
		else if (menu == MainMenu::вычитание) {
			system("cls");
			std::cout << "---------------------------------------------------------------------" << std::endl;
			std::cout << x << " - " << y << " = " << subtraction(x, y) << std::endl;
			std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
		}
		else if (menu == MainMenu::умножение) {
			system("cls");
			std::cout << "---------------------------------------------------------------------" << std::endl;
			std::cout << x << " * " << y << " = " << multiplication(x, y) << std::endl << std::endl;
			std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
		}
		else if (menu == MainMenu::деление) {
			system("cls");
			if (y != 0) {
				std::cout << "---------------------------------------------------------------------" << std::endl;
				std::cout << x << " / " << y << " = " << division(x, y) << std::endl;
				std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
			}
			else {
				std::cout << "---------------------------------------------------------------------" << std::endl;
				std::cout << "Деление на 0 невозможно!\n";
				std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
			}
		}
		else if (menu == MainMenu::возведение_в_степень) {
			system("cls");
			std::cout << "---------------------------------------------------------------------" << std::endl;
			std::cout << x << " в степени " << y << " = " << power(x, y) << std::endl;
			std::cout << "---------------------------------------------------------------------\n\n" << std::endl;
		}
	}

	return 0;
}