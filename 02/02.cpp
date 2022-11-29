#include <iostream>
#include <cstring>

//Задача 2. Счётчик

class Counter //Класс Counter счетчик с методами
{
private:
    int CounterResult_ = 0;

public:
    Counter(int initialInitValue) //Конструктор
    {
        this->CounterResult_ = initialInitValue;
    };
    
    int getCounter() //Метод просмотра значения элементов данных
    {
        return CounterResult_;
    };

    int counterPlus() //Метод увеличения значения на один
    {
        return ++CounterResult_;
    };
    
    int counterMinus() //Метод уменьшения значения на один
    {
        return --CounterResult_;
    };
};

int main()
{
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");

    std::string checkInitialInitValue;
    int initialInitValue = 0;
    bool checkTrueInitialInitValue = false;
    
    //Цикл проверки и задания начального значения счётчика
    do
    {
        std::cout << std::endl << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> checkInitialInitValue;
        std::cout << std::endl;
           
        if (checkInitialInitValue == "да" || checkInitialInitValue == "Да")
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> initialInitValue;
            checkTrueInitialInitValue = true;
        }
        else if (checkInitialInitValue == "нет" || checkInitialInitValue == "Нет")
        {
            checkTrueInitialInitValue = true;
        }
        else
        {
            std::cout << "Вы ввели неверную команду.";
        }
    } while (!checkTrueInitialInitValue);

    Counter Counter(initialInitValue);
        
    std::cout << std::endl;

    std::string commandValue;
    bool checkCommand = false;
    
    //Цикл работы счётчика
    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> commandValue;
        
        if (commandValue == "x")
        {
            std::cout << "Пока.";
            checkCommand = true;
        }
        else if (commandValue == "+")
        {
            Counter.counterPlus();
        }
        else if (commandValue == "-")
        {
            Counter.counterMinus();
        }
        else if (commandValue == "=")
        {
            std::cout << "Значение счетчика: " << Counter.getCounter() << "." << std::endl;
        }
        else
        {
            std::cout << "Вы ввели неверную команду." << std::endl;
        }
    } while (!checkCommand);
}