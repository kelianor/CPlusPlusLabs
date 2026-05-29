#include <iostream>
#include <cmath>
#include <stdexcept>
#include <exception>
#include <cmath>

using namespace std;

int main() {
    double R1, R2, R3;
    int choice = 1;

    while (choice == 1) {
        try {
            cout << "Введите R1: ";
            cin >> R1;
            cout << "Введите R2: ";
            cin >> R2;
            cout << "Введите R3: ";
            cin >> R3;


            if (R1 < 0 && fmod(R2, 1.0) != 0.0) {
                throw domain_error("Математическая ошибка: Возведение отрицательного числа в дробную степень!");
            }

            if ((R2 - R3) == 0)
            {
                throw runtime_error("Ошибка: Деление на 0! (R2 - R3 = 0).");
            }

            double numerator = sin(pow(R1, R2));
            double denominator = R2 - R3;
            double y = numerator / denominator;

            cout << "y = " << y << endl;
        }
        catch (runtime_error& e)
        {
            cout << "Произошло исключение: " << e.what() << endl;
        }
        catch (domain_error& e)
        {
            cout << "Произошло исключение: " << e.what() << endl;
        }
        catch (exception& e)
        {
            cout << "Стандартное исключение: " << e.what() << endl;
        }
        catch (...)
        {
            cout << "Произошло неизвестное исключение!" << endl;
        }

        cout << "\nЖелаете продолжить? (1 - Да, 0 - Завершить программу): ";
        cin >> choice;
    }
    return 0;
}
