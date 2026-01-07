#include <iostream>
using namespace std;

int main()
{
    const int m = 40, n = 3;
    int i;

    struct human
    {
        unsigned int key;
        char name[m];
    } group[n];// объявление массива из трех экземпляров структуры human (массив из трех переменных типа//стркутуры human)
    
    for(i = 0; i < n; i++)// заполнение полей массива записями (экземплярами структуры human, которые состоят
    {
        cout << "FIO = ";
        cin.getline( group[i].name, m);// ввод ФИО для i-го элемента массива

        cout << "key = ";
        cin >> group[i].key;// ввод значения key для i-го элемента массива

        cin.get();//ожидать нажатия клавиши клавиатуры пользователем
    }

    for(i = 0; i < n; i++)// вывод значений элементов массива на экран
    {
        cout << "FIO = " << group[i].name;
        cout << "key = " << group[i].key << endl;
    }

    system("pause");
    return 0;
}