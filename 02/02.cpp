#include <iostream>

//Задача 2. Счётчик

class Counter // класс счетчик с методами
{
private:
    int counterResult = 1;

public:
    
    int cInitialInitValue = 1;
    
    Counter(int InitialInitValue)
    {
        cInitialInitValue = InitialInitValue;
    };
    
    int setCounter(int conditionDefault)
    {
        cInitialInitValue = 1;
    };

    int getCounter()
    {
        return counterResult;
    };

    int counterPlus()
    {
        counterResult++;
        return counterResult;
    };
    
    int counterMinus()
    {
        counterResult--;
        return counterResult;
    };

    



};

//функция печати значений
void printResult(int result)
{
    std::cout << result << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    
    std::string checkInitialInitValue = "нет";

    std::cout << std::endl << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> checkInitialInitValue;
    std::cout << std::endl;

    if (checkInitialInitValue == "да" || checkInitialInitValue == "Да")
    {
        int InitialInitValue = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> InitialInitValue;

        Counter counter(InitialInitValue);
    }
    else if (checkInitialInitValue == "нет" || checkInitialInitValue == "Нет")
    {
        Counter counter();
    };
    
    
}