#include <iostream>
#include <cmath>
// в ар. 6
// Формула Герона
int main(){
    int a = 1; 
    int b = 1; // Для целых чисел по условию задачи подходит int
    int c = 1;
    std::cout << "Введите стороны треугольника: ";
    std::cin >> a >> b >> c;
    double p = (a+b+c)/2.0; // так как может получится вещественное число, необходим соответсвующий тип даных, имеет точность выше float
    double s = sqrt(p*(p-a)*(p-b)*(p-c)); // аналогично p
    unsigned short bits_in_unsigned_short = sizeof(unsigned short)*8; // для небольших положительных значений
    unsigned short bits_in_double = sizeof(double)*8;
    unsigned short bits_in_int = sizeof(int)*8;
    unsigned short min_value_unsigned_short = std::numeric_limits<unsigned short>::min(); // узнаем и сохраняем границы диапозона для типа unsigned short
    unsigned short max_value_unsigned_short = std::numeric_limits<unsigned short>::max();
    double min_value_double = std::numeric_limits<double>::lowest(); // поскольку принимает отрицательные значения необходимо использовать double с более точными значениями
    double max_value_double = std::numeric_limits<double>::max();
    double min_value_int = std::numeric_limits<int>::lowest();
    double max_value_int = std::numeric_limits<int>::max();
    std::cout << "Площадь треугольника: "<< s << ". Тип данных double" << std::endl;
    std::cout << "Тип int: " << bits_in_int  << "  бит. Min int: " << min_value_int << " Max int: " << max_value_int << std::endl;
    std::cout << "Тип double: " << bits_in_double << " бит. Min double: " << min_value_double << " Max double: " << max_value_double << std::endl;
    std::cout << "Тип unsigned short: " << bits_in_unsigned_short  << "  бит. Min unsigned short: " << min_value_unsigned_short << " Max unsigned short: " <<max_value_unsigned_short << std::endl;
}