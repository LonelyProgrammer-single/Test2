//Вар. 6
#include <iostream>
#include <bitset>

//№1
int main(){
   short A, A_original, bit_i; // Подходит лучше и оптимальнее под заданный диапазон
   int i; // Общепринятый тип для счетчиков
   std::cout << "Введите число A" << std::endl;
   std::cin >> A;
   A_original = A; // Переменная для хранения исходного значения A
   std::cout << "Введите индекс, при условии что должно выполняться условие: 0<i<16"<< std::endl;
   std::cin >> i;
   while ((i < 0 || i >15) || (!(std::cin) >> i)) { // Проверки на условие и символы
      std::cout << "Повторно введите индекс, убедитесь, что выполняется условие: 0<i<16"<< std::endl;
      std::cin >> i;
   }
   bit_i = A & (1<<i); // Сдвиг влево на i бит
   if (bit_i==0) {
      A = A*A;
      A = A & ~(1<<i); // Реверс бита i 
      std::cout << "Исходное: " << A_original << " = " << std::bitset<8>(A_original) << std::endl; // Представление в двоичной системе с ограничением в первые 8 бит по условию
      std::cout << "Результат: " << A << " = " << std::bitset<8>(A) << std::endl;
   }
   else {
      int alt_result = 125 & 0b10101010; // логическое И, замена четных битов на ноль
      std::cout << "Результат работы над числом 125: " << alt_result << " = " << std::bitset<8>(alt_result) << std::endl;
   }   return 0;
}

