//Вар. 6
//№2
#include <iostream>
int main() {
   int N;
   std::cout << "Введите номер маршрута" << std::endl;
   std::cin >> N;
   switch (N) {
      case 113: std::cout << "Калининград - Чапаево"; break;
      case 114: std::cout << "Калининград - Зеленоградск"; break;
      case 117: std::cout << "Калининград - Мамоно"; break;
      case 118: std::cout << "Калининград - Светлогорск"; break;
      case 119: std::cout << "Калининград - Пионерский"; break;
      case 125: std::cout << "Калининград - Донское"; break;
      case 136: std::cout << "Калининград - Партизанское"; break;
      case 141: std::cout << "Калининград - Зеленоградск"; break;
      case 148: std::cout << "Калининград - Багратионовск"; break;
      case 161: std::cout << "Калининград - Светлое"; break;
      case 191: std::cout << "Калининград - Багратионовск"; break;
      case 593: std::cout << "Калининград - Морское"; break;
      case 802: std::cout << "Калининград - Гданьск"; break;
      default: std::cout << "Рейс не найден в базе данных. Проверьте правильность номера маршрута.";
   }
   return 0;
}