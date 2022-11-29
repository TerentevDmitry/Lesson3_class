#include "Counter.h"

    Counter::Counter(int initialInitValue) //Конструктор
    {
        counterResult_ = initialInitValue;
    };

    int Counter::getCounter() //Метод просмотра значения элементов данных
    {
        return counterResult_;
    };

    int Counter::counterPlus() //Метод увеличения значения на один
    {
        return ++counterResult_;
    };

    int Counter::counterMinus() //Метод уменьшения значения на один
    {
        return --counterResult_;
    };