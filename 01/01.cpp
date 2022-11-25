#include <iostream>

//Задача 1. Калькулятор двух чисел

class Calculator // класс калькулятор с методами
{
private:
    double cResult = 0;

public:
    double cNum1 = 0;
    double cNum2 = 0;

    double add()
    {
        cResult = cNum1 + cNum2;

        return cResult;
    };
    
    double multiply()
    {
        cResult = cNum1 * cNum2;

        return cResult;
    };
    
    double subtract_1_2()
    {
        cResult = cNum1 - cNum2;

        return cResult;
    };

    double subtract_2_1()
    {
        cResult = cNum2 - cNum1;

        return cResult;
    };

    double divide_1_2()
    {
        cResult = cNum1 / cNum2;

        return cResult;
    };

    double divide_2_1()
    {
        cResult = cNum2 / cNum1;

        return cResult;
    };

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            cNum1 = num1;
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
            cNum2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

//функция печати значений
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

    while (true) // Программа работает бесконечно, пока пользователь не закроет консоль
    {
        std::cout << std::endl; //Для красоты

        Calculator result; //Создаем объект
        
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
        
        result.cNum1 = num1; //Присваиваем значение введенных переменных в поле класса 
        result.cNum2 = num2;

        result.add(); //Используем метод из класса Calculator
        std::cout << std::endl << "num1 + num2 = "; //Печатаем результат в консоль
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