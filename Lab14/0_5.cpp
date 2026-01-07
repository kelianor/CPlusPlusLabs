#include <iostream>
using namespace std;

union Uflc// объявление объединения типа union
{
    float f;//вещественное число размером 4 байта
    unsigned long l;// длинное целое без знака размером 4 байта
    unsigned char c[4];// символьный массив из 4 байт, поскольку один символ занимает 1 байт
};

void print(Uflc);//вывод (печать) полей объединения

int main()
{
    Uflc FLC = { 1.0 };// инициализация поля в объединении (только одного поля)

    print(FLC);// вывод (печать) полей объединения

    cout<<"Input float number = ";
    cin >> FLC.f;// ввод вещественного числа

    print(FLC);// вывод по байтам представления вещественного числа

    FLC.l = 1;// ввод длинного целого значения
    print(FLC);// вывод полей объединения

    system("pause");
    return 0;
}

void print(Uflc FLC)//вывод полей объединения
{
    cout << "float = " << FLC.f << endl;
    cout << "long = " << hex << FLC.l << endl;
    cout << "char = ";

    cout.unsetf(ios::dec);
    cout.setf(ios::hex);

    for( int i = 0; i < 4; i++)
    {
        cout << (unsigned(FLC.c[i])&0xff) << " ";
    }
    
    cout.unsetf(ios::hex);
    cout.setf(ios::dec);
    cout << endl;
}