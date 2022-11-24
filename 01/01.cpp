#include <iostream>

class Calculator 
{
public:
    double num1 = 1.5;
    double num2 = 2;
    double result = 0;

    double add()
    {
        this->result = num1 + num2;

        return result;
    };
    
    double multiply()
    {
        this->result = num1 * num2;

        return result;
    };
    
    double subtract_1_2()
    {
        this->result = num1 - num2;

        return result;
    };

    double subtract_2_1()
    {
        this->result = num2 - num1;

        return result;
    };

    double divide_1_2()
    {
        this->result = num1 / num2;

        return result;
    };

    double divide_2_1()
    {
        this->result = num2 / num1;

        return result;
    };

    bool set_num1(double num1)
    {
        
    }




};

void printCalculator(double result)
{
    std::cout << result << std::endl;
}

double dataEnter(double num1, double num2)
{
    
}


int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    Calculator sum;

    std::cout << "Введите num1: ";
    std::cin >> sum.num1;
    std::cout << "Введите num2: ";
    std::cin >> sum.num2;
    sum.add();
    std::cout << std::endl << "num1 + num2 = ";
    printCalculator(sum.add());
    
    Calculator multiply;
    multiply.num1 = sum.num1;
    multiply.num2 = sum.num2;
    multiply.multiply();
    std::cout << "num1 * num2 = ";
    printCalculator(multiply.multiply());

    Calculator subtract_1_2;
    subtract_1_2.num1 = sum.num1;
    subtract_1_2.num2 = sum.num2;
    subtract_1_2.subtract_1_2();
    std::cout << "num1 - num2 = ";
    printCalculator(subtract_1_2.subtract_1_2());

    Calculator subtract_2_1;
    subtract_2_1.num1 = sum.num1;
    subtract_2_1.num2 = sum.num2;
    subtract_2_1.subtract_2_1();
    std::cout << "num2 - num1 = ";
    printCalculator(subtract_2_1.subtract_2_1());

    Calculator divide_1_2;
    divide_1_2.num1 = sum.num1;
    divide_1_2.num2 = sum.num2;
    divide_1_2.divide_1_2();
    std::cout << "num1 / num2 = ";
    printCalculator(divide_1_2.divide_1_2());

    Calculator divide_2_1;
    divide_2_1.num1 = sum.num1;
    divide_2_1.num2 = sum.num2;
    divide_2_1.divide_2_1();
    std::cout << "num2 / num1 = ";
    printCalculator(divide_2_1.divide_2_1());





}