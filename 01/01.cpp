#include <iostream>

//Задача 1. Калькулятор двух чисел

class Calculator // класс калькулятор с методами
{
public:
    double num1 = 0;
    double num2 = 0;
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
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

//функция печати значений
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

    while (true) // Программа работает бесконечно, пока пользователь не закроет консоль
    {
        std::cout << std::endl; //Для красоты

        Calculator check; //Создаем объект для проверки корректности ввода
        
        do //Проверка num1 равенства нулю
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (!check.set_num1(num1))
            {
                std::cout << "Неверный ввод! " << std::endl;
            };
        } while (!check.set_num1(num1));

        do //Проверка num2 равенства нулю
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!check.set_num2(num2))
            {
                std::cout << "Неверный ввод! " << std::endl;
            };
        } while (!check.set_num2(num2));
        
        Calculator sum;
        sum.num1 = num1;
        sum.num2 = num2;
        sum.add();
        std::cout << std::endl << "num1 + num2 = ";
        printCalculator(sum.add());
    
        Calculator multiply;
        multiply.num1 = num1;
        multiply.num2 = num2;
        multiply.multiply();
        std::cout << "num1 * num2 = ";
        printCalculator(multiply.multiply());

        Calculator subtract_1_2;
        subtract_1_2.num1 = num1;
        subtract_1_2.num2 = num2;
        subtract_1_2.subtract_1_2();
        std::cout << "num1 - num2 = ";
        printCalculator(subtract_1_2.subtract_1_2());

        Calculator subtract_2_1;
        subtract_2_1.num1 = num1;
        subtract_2_1.num2 = num2;
        subtract_2_1.subtract_2_1();
        std::cout << "num2 - num1 = ";
        printCalculator(subtract_2_1.subtract_2_1());

        Calculator divide_1_2;
        divide_1_2.num1 = num1;
        divide_1_2.num2 = num2;
        divide_1_2.divide_1_2();
        std::cout << "num1 / num2 = ";
        printCalculator(divide_1_2.divide_1_2());

        Calculator divide_2_1;
        divide_2_1.num1 = num1;
        divide_2_1.num2 = num2;
        divide_2_1.divide_2_1();
        std::cout << "num2 / num1 = ";
        printCalculator(divide_2_1.divide_2_1());
    }
}