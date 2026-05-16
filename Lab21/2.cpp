#include <iostream>

class Fraction {
private:
    int m; // Числитель
    int n; // Знаменатель

    int findGCD(int a, int b) const {
        a = abs(a);
        b = abs(b);
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction() : m(0), n(1) {}

    Fraction(int numerator, int denominator) : m(numerator), n(denominator) {
        if (n == 0) {
            std::cout << "Ошибка: Знаменатель не может быть равен 0! Установлен в 1.\n";
            n = 1;
        }
    }

    void print() const {
        std::cout << m << "/" << n;
    }

    Fraction operator!() const {
        int gcd = findGCD(m, n);
        
        int newM = m / gcd;
        int newN = n / gcd;

        if (newN < 0) {
            newM = -newM;
            newN = -newN;
        }

        return Fraction(newM, newN);
    }
};

int main() {
    std::cout << "=== ТЕСТИРОВАНИЕ КЛАССА РАЦИОНАЛЬНАЯ ДРОБЬ ===\n\n";

    Fraction f1(12, 16);
    std::cout << "Тест 1. Исходная дробь: "; f1.print();
    Fraction f1_reduced = !f1;
    std::cout << "\nПосле сокращения (!f1): "; f1_reduced.print();
    std::cout << "\n\n";

    Fraction f2(5, 7);
    std::cout << "Тест 2. Исходная дробь: "; f2.print();
    Fraction f2_reduced = !f2;
    std::cout << "\nПосле сокращения (!f2): "; f2_reduced.print();
    std::cout << "\n\n";

    Fraction f3(150, 450);
    std::cout << "Тест 3. Исходная дробь: "; f3.print();
    Fraction f3_reduced = !f3;
    std::cout << "\nПосле сокращения (!f3): "; f3_reduced.print();
    std::cout << "\n\n";

    Fraction f4(10, -20);
    std::cout << "Тест 4. Исходная дробь: "; f4.print();
    Fraction f4_reduced = !f4;
    std::cout << "\nПосле сокращения (!f4): "; f4_reduced.print();
    std::cout << "\n";

    return 0;
}