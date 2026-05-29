#include <iostream>
#include <cmath>
#include <stdexcept>
#include <exception>
#include <new>
#include <typeinfo>
using namespace std;

int main()
{
    double a, b, h;
    cout << "Введите начальное значение x: ";
    cin.clear();
    cin >> a;

    cout << "Введите конечное значение x: ";
    cin.clear();
    cin >> b;

    cout << "Введите шаг: ";
    cin.clear();
    cin >> h;

    cout << "\tx\t|\ty(x)\t|\n";
    for(double x = a; x <= b; x += h)
    {
        try
        {
            double c = pow(x, 3) - 1;
            double d = pow(x, 2) - 1;

            if(c < 0 | d < 0)
            {
                throw std::logic_error("Квадратный корень из отрицательного числа!");
            }

            if(d == 0)
            {
                throw std::logic_error("Деление на ноль!");
            }

            double y = sqrt(c) / sqrt(d);

            cout << '\t' << x << "\t|\t" << y << "\t|\n";
        }
        catch (std::logic_error &e)
        {
            cout << "Ошибка! " << e.what() << endl;
        }
    }
    return 0;
}
