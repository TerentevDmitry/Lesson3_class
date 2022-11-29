#include <iostream>

//Задача 1. Калькулятор двух чисел

class Calculator // класс калькулятор с методами
{
private:
    double Num1_ = 1;
    double Num2_ = 1;

public:
    double add()
    {
        return Num1_ + Num2_;
    };
    
    double multiply()
    {
        return Num1_ * Num2_;
    };
    
    double subtract_1_2()
    {
        return Num1_ - Num2_;
    };

    double subtract_2_1()
    {
        return Num2_ - Num1_;
    };

    double divide_1_2()
    {
        return Num1_ / Num2_;
    };

    double divide_2_1()
    {
        return Num2_ / Num1_;
    };

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            Num1_ = num1;
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
            Num2_ = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

//Функция печати значений
void printResult(double result)
{
    std::cout << result << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    double num1 = 0;
    double num2 = 0;
    
    Calculator result; //Создаем объект

    while (true) //Программа работает бесконечно, пока пользователь не закроет консоль
    {
        std::cout << std::endl; //Для красоты

        do //Проверка num1 равенства нулю
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (!result.set_num1(num1))
            {
                std::cout << "Неверный ввод! " << std::endl;
            };
        } while (!result.set_num1(num1));

        do //Проверка num2 равенства нулю
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (!result.set_num2(num2))
            {
                std::cout << "Неверный ввод! " << std::endl;
            };
        } while (!result.set_num2(num2));
        
        result.add(); //Используем метод из класса Calculator
        std::cout << std::endl << "num1 + num2 = "; //Печатаем в консоль
        printResult(result.add()); //Печатаем результат в консоль
    
        result.multiply(); 
        std::cout << "num1 * num2 = ";
        printResult(result.multiply());

        result.subtract_1_2(); 
        std::cout << "num1 - num2 = ";
        printResult(result.subtract_1_2());

        result.subtract_2_1(); 
        std::cout << "num2 - num1 = ";
        printResult(result.subtract_2_1());

        result.divide_1_2(); 
        std::cout << "num1 / num2 = ";
        printResult(result.divide_1_2());

        result.divide_2_1(); 
        std::cout << "num2 / num1 = ";
        printResult(result.divide_2_1());
    }
}