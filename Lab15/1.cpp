#include <iostream>
using namespace std;

struct emp
{
    int empNo;
    char name[80];
    double salary;
};

void inputEmp(emp&);

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

    cout << "Сортировка методом выбора поля фамилии сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    selSortName(sortArr, n);

    cout << "Сортировка методом Шелла поля фамилии сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    shellSortName(sortArr, n);

    cout << "Сортировка методом выбора поля зарплаты сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    selSortSalary(sortArr, n);

    cout << "Сортировка методом Шелла поля зарплаты сотрудника:\n";
    for (int i = 0; i < n; i++)
    {
        sortArr[i] = arr[i];
    }
    shellSortSalary(sortArr, n);
    
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