#include <iostream>
using namespace std;

const int m = 40;

struct student// объявление структуры student
{
    unsigned int key;
    char name[m];
};

student read();// ввод значений полей структуры student
void print(student);//вывод значений полей структуры student

int main()
{
    const int n = 3;
    typedef student arr_student[n];// определение типа для массива из структур student
    arr_student group;// объявление массива из структур student

    for( int i = 0; i < n; i++ )// заполнение полей массива из структур student
    {
        group[i] = read();
    }

    for( int i = 0; i < n; i++ )// вывод значений элементов массива на экран
    {
        print(group[i]);
    }

    system("pause");
    return 0;
}
student read()//функция ввода значений полей структуры student
{
    student stud;

    cout << "FIO = ";
    cin.getline(stud.name, m);// ввод ФИО

    cout << "key = ";
    cin >> stud.key;// ввод значения key

    cin.get();

    return stud;
}

void print(student stud)// вывод значений полей структуры student
{
    cout << "FIO = " << stud.name;
    cout << "key = " << stud.key << endl;
}