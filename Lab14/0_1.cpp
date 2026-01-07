#include <iostream>
using namespace std;

struct cmplex
{
    float re, im;
};

cmplex read(); // ввод комплексного числа
void print(cmplex);  // вывод комплексного числа
cmplex add(cmplex, cmplex);  // сумма двух комплексных чисел

int main()
{
    cmplex c1, c2, c3;

    c1 = read();
    c2 = read();
    c3 = add(c1, c2);

    print(c3);

    system("pause");
    return 0;
}

cmplex read()
{
    cmplex c;

    cout << "re = ";
    cin >> c.re;

    cout << "im = ";
    cin >> c.im;

    return c;
}
void print(cmplex c)
{
    cout << c.re << " + i " << c.im << endl;
}
cmplex add(cmplex c1, cmplex c2)
{
    cmplex c3;

    c3.re = c1.re + c2.re;
    c3.im = c1.im + c2.im;

    return c3;
}