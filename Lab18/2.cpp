#include <iostream>
#include <time.h>
using namespace std;

class Calculator
{
private:
	double a;
	double b;
	char c;
	double r;
public:
	double getA();
	double getB();
	char getC();
	double getR();
	void setA(double a0);
	void setB(double a0);
	Calculator(double a1, double b1);
	void vychislenie(char x);
	void Random();
};

Calculator::Calculator(double a1, double b1)
{
	a = a1;
	b = b1;
}

double Calculator::getA()
{
	return a;
}

double Calculator::getB()
{
	return b;
}

char Calculator::getC()
{
	return c;
}

double Calculator::getR()
{
	return r;
}

void Calculator::setA(double a0)
{
	a = a0;
}

void Calculator::setB(double b0)
{
	b = b0;
}

void Calculator::vychislenie(char x)
{
	c = x;
	switch (x)
	{
	case '+':
	{
		r = a + b;
		break;
	}
	case '-':
	{
		r = a - b;
		break;
	}
	case '*':
	{
		r = a * b;
		break;
	}
	case '/':
	{
		r = a / b;
		break;
	}
	default:
	{
		cout << "Арифмитическое действие отсутствует.\n";
		break;
	}
	}
	return;
}

void Calculator::Random()
{
	srand(time(NULL));
	int a = this->a;
	int b = this->b;
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	r = a + rand() % (b - a + 1);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a1, b1;
	char x0;
	bool f;
	do
	{
		cout << "\nУстановите английскую раскалдку.\nВведите число-операнд1: ";
		cin >> a1;
		cout << "Введите арифметическое знак-оператор (+-*/): ";
		cin >> x0;
		cout << "Введите число-операнд2: ";
		cin >> b1;
		Calculator k(a1, b1);
		k.vychislenie(x0);
		double rez = k.getR();
		cout << k.getA() << ' ' << k.getC() << ' ' << k.getB() << " = " << k.getR() << endl;
		k.Random();
		cout << "Рандомное число в заданном диапазоне: " << k.getR() << endl;
		cout << "Продолжить (Да: 1, Нет: 0): ";
		cin >> f;
	} while (f == true);
	system("pause");
	return 0;
}