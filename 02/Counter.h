#pragma once

class Counter //Класс Counter счетчик с методами
{
private:
    int counterResult_ = 0;

public:
    Counter(int initialInitValue);//Конструктор
    int getCounter();//Метод просмотра значения элементов данных
    int counterPlus();//Метод увеличения значения на один
    int counterMinus();//Метод уменьшения значения на один
};
