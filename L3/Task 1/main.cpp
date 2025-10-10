 #include <iostream>
	#include <locale>
	int main() {
		setlocale(LC_ALL, "rus");
		int summ = 0;
		int N = 0;
		std::cout << "Введите кол-во чисел последовательности" << std::endl;
		std::cin >> N;
		int max_number = 0;
		int max_i = 0;
		int count = 0;
		bool max_num = false;
		std::cout << "Введите число" << std::endl;
			for (int i = 1; i <= N; i++) {
				int current_number;
				std::cin >> current_number;
				if (current_number % 3 != 0 && current_number % 5 != 0 && current_number % 7 != 0) {
					count++;
					summ += current_number;
					if (!max_num) {
						max_number = current_number;
						max_i = i;
						max_num = true;
					}
					else {
						if (current_number > max_number) {
							max_number = current_number;
							max_i = i;
						}
					}
				}
			}
			if (!max_num) {
				std::cout << "Нет чисел удовлетворяющих условию" << std::endl;
			}
			else {
				std::cout << "Сумма чисел удовлетворяющих условию: " << summ << std::endl;
				std::cout << "Самое большое число: " << max_number << std::endl;
				std::cout << "Номер числа последовательности:" << max_i << std::endl;
			}
		
		return 0;

	}