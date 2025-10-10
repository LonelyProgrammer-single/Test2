 #include <iostream>
#include <locale>
#include <cmath>
int main() {
	setlocale(LC_ALL, "rus");
	int X = 0;
	std::cout << "Введите целое число не больше 1000 по модулю" << std::endl;
	std::cin >> X;
	if (abs(X) < 1000) {
		int digits_count = 0;
		int first_digit = 0;
		int temp_X = X;
		if (temp_X == 0) {
			int digits_count = 1;
		}
		else {
			temp_X = abs(temp_X);
			while (temp_X > 0) {
				temp_X = temp_X / 10;
				digits_count++;
			}
			first_digit = abs(X);
			while (first_digit >= 101) {
				first_digit = first_digit / 10;
			}
		}
		std::cout << "Кол-во разрядов: " << digits_count << std::endl;
		std::cout << "Первая цифра: " << first_digit << std::endl;
	}
}