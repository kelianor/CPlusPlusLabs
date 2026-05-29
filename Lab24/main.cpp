#include <iostream>
#include <cmath>
#include <stdexcept>
#include <exception>
#include <new>
#include <typeinfo>

using namespace std;

int main() {
    double z;
    int a = 1, x, y;
    while(a != 0)
    {
        try
        {
            cout << "Введите делимое: ";
            cin >> x;
            cout << "Введите делимое: ";
            cin >> y;
            if(y == 0)
            {
                throw std::logic_error("Ошибка деления на ноль.\n");
            }
            if(y == 9999)
            {
                throw std::runtime_error("Некоторая ошибка.\n");
            }
            if(y == 7777)
            {
                throw 1;
            }
            z = (double)x / y;
            cout << "Частное от деления " << x << " на " <<  y << " равно: " << z << endl << "0-завершить; 1-повторить ввод. Выберите желаемое действие: ";
            cin >> a;
        }
        catch (int)
        {
            cout << "Нельзя вводить делимое 7777.\n";
        }
        catch (std::logic_error e)
        {
            cout << "Произошла логическая ошибка: " << e.what();
        }
        catch (std::exception e1)
        {
            cout << "Произошла ошибка: " << e1.what();
        }
    }

    return 0;
}
