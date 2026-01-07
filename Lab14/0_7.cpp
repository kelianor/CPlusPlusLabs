#include <iostream>
using namespace std;

void binary(unsigned char ch);//прототип функции вывода на экран двоичного представления байта-параметраint main()

int main()
{
    unsigned c;
    cin >> c;// вводим число 0…255

    if( c < 256 )
    {
        binary(c);// битовое представление числа c
    }

    system("pause");
    return 0;
}

void binary(unsigned char ch)//вывод на экран двоичного представления байта-параметра
{
    union myByteChar
    {
        unsigned char ss;
        struct myStruct
        {
            unsigned a0: 1;
            unsigned a1: 1;
            unsigned a2: 1;
            unsigned a3: 1;
            unsigned a4: 1;
            unsigned a5: 1;
            unsigned a6: 1;
            unsigned a7: 1;
        } byte;
    } cod;

    cod.ss = ch;//занесение в объединение значения параметра
    
    cout << "byte = ";
    cout << " " << cod.byte.a7 << " " << cod.byte.a6 << " " << cod.byte.a5 << " " << cod.byte.a4// вывод бит
    << " " << cod.byte.a3 << " " << cod.byte.a2 << " " << cod.byte.a1 << " " << cod.byte.a0 << endl;
}