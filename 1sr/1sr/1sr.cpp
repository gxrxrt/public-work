//Составить программу, которая будет считывать введённое пятизначное число. После чего, каждую цифру этого числа необходимо вывести в новой строке.

#include <iostream>
#include <string>
#include <ctype.h>

void task(std::string n) {
	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << " цифра числа: " << n[i] << "." << std::endl;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	std::cout << "Введите любое целое пятизначное число: ";
	std::string n;
	std::cin >> n;
	int a = 0;
	if (n.size() == 5) {
		for (int i = 0; i < 5; i++) {
			if (isdigit(n[i])) {
				a += 1;
			}
		}
		if (a == 5) {
			task(n);
		}
		else std::cout << "Введённое значение не является целым числом!";

	}
	else  (n.size() > 5) ? std::cout << "Введённое значение больше содержит больше 5 знаков" : std::cout << "Введённое значение больше содержит меньше 5 знаков";
}
