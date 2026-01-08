#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

struct emp
{
    int empNo;
    char name[80];
    double salary;
};

void inputEmp(emp&);
void swap(emp&, emp&);
int minSalaryFrom(emp*, int, int);
int minNameFrom(emp*, int, int);

void shellSortName(emp*, int);
void selSortName(emp*, int);

void shellSortSalary(emp*, int);
void selSortSalary(emp*, int);

int main()
{
    int n;
    do
    {
        cout << "Введите размер массива: ";
        cin >> n;
    } 
    while (n <= 0);
    
    emp *arr = new emp[n];

    if (!arr)
    {
        cout << "Не удалось создать массив!\n";
        system("pause");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Заполнение " << i << "-й ячейки:\n";
        inputEmp(arr[i]);
        cout << endl;
    }

    // Сортировка

    emp *sortArr = new emp[n];

    if (!sortArr)
    {
        cout << "Не удалось создать массив!\n";
        system("pause");
        return 0;
    }

    cout << "\nСортировка методом выбора поля фамилии сотрудника:\n";
    
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    selSortName(sortArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sortArr[i].empNo << " - " << sortArr[i].name << " - " << sortArr[i].salary << "$\n";
    }

    cout << "\nСортировка методом Шелла поля фамилии сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    shellSortName(sortArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sortArr[i].empNo << " - " << sortArr[i].name << " - " << sortArr[i].salary << "$\n";
    }

    cout << "\nСортировка методом выбора поля зарплаты сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    selSortSalary(sortArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sortArr[i].empNo << " - " << sortArr[i].name << " - " << sortArr[i].salary << "$\n";
    }

    cout << "\nСортировка методом Шелла поля зарплаты сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    shellSortSalary(sortArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sortArr[i].empNo << " - " << sortArr[i].name << " - " << sortArr[i].salary << "$\n";
    }
    
    delete[] arr;
    delete[] sortArr;
    return 0;
}

void inputEmp(emp &emp)
{
    cout << "Введите какой это сотрудник по счёту: ";
    cin >> emp.empNo;
    cout << "Введите имя сотрудника: ";
    cin.get();
    cin.get(emp.name, 80);
    cout << "Введите заработную плату сотрудника: ";
    cin >> emp.salary;
}

void swap(emp &first, emp &second)
{
    emp tmp = first;
    first = second;
    second = tmp;
}

int minSalaryFrom(emp *m, int position, int length)
{
    int minIndex = position;
    for(int i = position + 1; i < length; i++)
    {
        if(m[i].salary > m[minIndex].salary)
        {
            minIndex = i;
        }
    }
    return minIndex;
}

int minNameFrom(emp *m, int position, int length)
{
    int minIndex = position;
    for(int i = position + 1; i < length; i++)
    {
        if(strcmp(m[i].name, m[minIndex].name) < 0)
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void selSortSalary(emp *m, int length)
{
    for(int i = 0; i < length - 1; i++)
    {
        swap(m[i], m[minSalaryFrom(m, i, length)]);
    }
}

void selSortName(emp *m, int length)
{
    for(int i = 0; i < length - 1; i++)
    {
        swap(m[i], m[minNameFrom(m, i, length)]);
    }
}

void shellSortSalary(emp *m, int n)
{
    for(int i = n / 2; i > 0; i = i / 2)
    {
        for(int j = 0; j < n - i; j++)
        {
            for(int k = j; k > -1; k = k - i)
            {
                if(m[k].salary < m[k + i].salary)
                {
                    emp t = m[k];
                    m[k] = m[k + i];
                    m[k + i] = t;
                }
                else
                {
                    k = 0;
                }
            }
        }
    }
}

void shellSortName(emp *m, int n)
{
    for(int i = n / 2; i > 0; i = i / 2)
    {
        for(int j = 0; j < n - i; j++)
        {
            for(int k = j; k > -1; k = k - i)
            {
                if(strcmp(m[k].name, m[k + i].name) > 0)
                {
                    emp t = m[k];
                    m[k] = m[k + i];
                    m[k + i] = t;
                }
                else
                {
                    k = 0;
                }
            }
        }
    }
}