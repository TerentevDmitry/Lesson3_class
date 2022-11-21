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
    
    double multiply(double num1, double num2)
    {
        this->result = num1 * num2;

        return result;
    };
    
    double subtract_1_2(double num1, double num2)
    {
        this->result = num1 - num2;

        return result;
    };

    double subtract_2_1(double num1, double num2)
    {
        this->result = num2 - num1;

        return result;
    };

    double divide_1_2(double num1, double num2)
    {
        this->result = num1 / num2;

        return result;
    };

    double divide_2_1(double num1, double num2)
    {
        this->result = num2 / num1;

        return result;
    };

    //bool set_num1(double num1)






};

void printCalculator(double result)
{
    std::cout << result << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    double num1 = 0;
    double num2 = 0;

    std::cout << "Введите num1: ";
    std::cin >> num1;
    std::cout << std::endl;

    std::cout << "Введите num2: ";
    std::cin >> num2;
    std::cout << std::endl;

    Calculator summary;
    summary.add();
    std::cout << "num1 + num2 = ";
    printCalculator(summary.add());

    

    


}