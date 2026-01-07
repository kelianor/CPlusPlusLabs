#include <iostream>
using namespace std;

const int m = 40;

struct student// объявление структуры student
{
    unsigned int key;
    char name[m];
};

student read();//прототип функции ввода значений полей структуры student
void print(student);// прототип функции вывода значений полей структуры student

int main()
{
    const int n = 3;
    student group[n];// объявление массива из экземпляров структуры student

    for(int i = 0; i < n; i++)// заполнение полей массива экземплярами структуры student
    group[i] = read();

    for(int i = 0; i < n; i++)// вывод значений элементов массива на экран
    {
        print(group[i]);
    }

    system("pause");
    return 0;
}

student read()// ввод значений полей структуры student (полное определение функции)
{
    student stud;

    cout << "FIO = ";
    cin.getline(stud.name, m);// ввод ФИО

    cout << "key = ";
    cin >> stud.key;// ввод значения key

    cin.get();
    return stud;
}

void print(student stud)// вывод значений полей структуры student (полное определение функции)
{
    cout << "FIO = " << stud.name;
    cout << "key = " << stud.key << endl;
}