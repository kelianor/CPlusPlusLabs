#include <iostream>
#include <cstring>
using namespace std;

enum Fields {FirstName, LastName, Title, Year, Birth, Salary, Phone};

struct Date
{
    int year;
    int month;
    int day;
};

struct Emp
{
    char firstName[80];
    char lastName[80];
    char title[80];
    int year;
    Date birth;
    double salary;
    long long phone;
};

int cmp(double &a, double &b);
int cmp(int &a, int &b);
int cmp(long long &a, long long &b);

int compare(double&, double&, Fields, bool);
int compare(Emp&, Emp&, Fields, bool);

void swap(Emp&, Emp&);
int minFrom(Emp*, int, int, Fields, bool);

void selSort(Emp*, int, Fields, bool);
void shellSort(Emp*, int, Fields, bool);

void inputEmp(Emp&);
void printEmp(Emp&);

int regularSearch(Emp*, int, Fields, Emp&);
int binarySearch(Emp*, int, Fields, Emp&);

int main()
{
    int choice;
    do
    {
        cout << "Выберите задание: 1 - первое, 2 - второе, 3 - третье, 0 - завершить работу: ";
        cin >> choice;

        int n;
        do
        {
            cout << "Введите размер массива: ";
            cin >> n;
        } 
        while (n <= 0);
    
        Emp *arr = new Emp[n];

        if (!arr)
        {
            return 0;
        }

        for (int i = 0; i < n; i++)
        {
            cout << "Заполнение " << i << "-й ячейки:\n";
            inputEmp(arr[i]);
            cout << endl;
        }

        Emp *sortArr = new Emp[n];
        bool sorted = false;

        if (!sortArr)
        {
            return 0;
        }

        switch(choice)
        {
            case 0:
            {
                delete[] sortArr;
                delete[] arr;
                break;
            }
            case 1:
            {
                cout << "\nСортировка методом выбора поля фамилии сотрудника:\n";

                for (int i = 0; i < n; i++)
                {
                    sortArr[i] = arr[i];
                }
                selSort(sortArr, n, Fields::LastName, false);
                for(int i = 0; i < n; i++) printEmp(sortArr[i]);

                cout << "\nСортировка методом Шелла поля фамилии сотрудника:\n";
                for (int i = 0; i < n; i++)
                {
                    sortArr[i] = arr[i];
                }
                shellSort(sortArr, n, Fields::LastName, false);
                for(int i = 0; i < n; i++) printEmp(sortArr[i]);

                cout << "\nСортировка методом выбора поля зарплаты сотрудника:\n";
                for (int i = 0; i < n; i++)
                {
                    sortArr[i] = arr[i];
                }
                selSort(sortArr, n, Fields::Salary, true);
                for(int i = 0; i < n; i++) printEmp(sortArr[i]);

                cout << "\nСортировка методом Шелла поля зарплаты сотрудника:\n";
                for (int i = 0; i < n; i++)
                {
                    sortArr[i] = arr[i];
                }
                shellSort(sortArr, n, Fields::Salary, true);
                for(int i = 0; i < n; i++) printEmp(sortArr[i]);

                sorted = true;
                break;
            }
            case 2:
            {
                int chosen;
                cout << "Выберите поле: 0 - FirstName, 1 - LastName, 2 - Title, 3 - Year, 4 - Birth, 5 - Salary, 6 - Phone: ";
                cin >> chosen;
                Fields chosenField = static_cast<Fields>(chosen);

                Emp key = {};
        


                switch(chosenField)
                {
                    case FirstName:
                    {
                        cout << "Введите имя для поиска: ";
                        cin.ignore();
                        cin.getline(key.firstName, 80);
                        break;
                    }
                    case LastName:
                    {
                        cout << "Введите фамилию для поиска: ";
                        cin.ignore();
                        cin.getline(key.lastName, 80);
                        break;
                    }
                    case Title:
                    {
                        cout << "Введите должность для поиска: ";
                        cin.ignore();
                        cin.getline(key.title, 80);
                        break;
                    }
                    case Year:
                    {
                        cout << "Введите год начала работы для поиска: ";
                        cin >> key.year;
                        break;
                    }
                    case Birth:
                    {
                        cout << "Введите год рождения для поиска: ";
                        cin >> key.birth.year;
                        cout << "Введите месяц рождения для поиска: ";
                        cin >> key.birth.month;
                        cout << "Введите день рождения для поиска: ";
                        cin >> key.birth.day;
                        break;
                    }
                    case Salary:
                    {
                        cout << "Введите оклад для поиска: ";
                        cin >> key.salary;
                        break;
                    }
                    case Phone:
                    {
                        cout << "Введите номер телефона для поиска: +";
                        cin >> key.phone;
                        break;
                    }
                }

                if(sorted)
                {
                    int idx = binarySearch(sortArr, n, chosenField, key);
                    if (idx != -1)
                    {
                        cout << "Элемент найден под индексом " << idx << endl;
                        printEmp(sortArr[idx]);
                    }
                    else
                    {
                        cout << "Элемент не найден" << endl;
                    }
                }
                else
                {
                    int idx = regularSearch(arr, n, chosenField, key);
                    if (idx != -1)
                    {
                        cout << "Элемент найден под индексом " << idx << endl;
                        printEmp(arr[idx]);
                    }
                    else
                    {
                        cout << "Элемент не найден" << endl;
                    }
                }
                break;
            }
            case 3:
            {
                int cols, rows;
                do
                {
                    cout << "Введите количество строк: ";
                    cin >> cols;
                } 
                while (cols <= 0);

                do
                {
                    cout << "Введите количество столбцоы: ";
                    cin >> rows;
                } 
                while (cols <= 0);
        
                long int **mas = new long int*[cols];

                break;
            }
        }
    } while (choice != 0);
    return 0;
}

void inputEmp(Emp &emp)
{
    cout << "Введите фамилию сотрудника: ";
    cin.get();
    cin.get(emp.lastName, 80);
    cout << "Введите имя сотрудника: ";
    cin.get();
    cin.get(emp.firstName, 80);
    cout << "Введите должность сотрудника: ";
    cin.get();
    cin.get(emp.title, 80);
    cout << "Введите заработную плату сотрудника: ";
    cin >> emp.salary;
    cout << "Введите год с которого он начал работать: ";
    cin >> emp.year;
    cout << "Введите номер телефона: +";
    cin >> emp.phone;
    cout << "Введите год рождения: ";
    cin >> emp.birth.year;
    cout << "Введите месяц рождения: ";
    cin >> emp.birth.month;
    cout << "Введите день рождения: ";
    cin >> emp.birth.day;
}

int compare(Emp &a, Emp &b, Fields field, bool reverse)
{
    int state = 0;
    switch(field)
    {
        case FirstName:
        {
            state = strcmp(a.firstName, b.firstName);
            break;
        }
        case LastName:
        {
            state = strcmp(a.lastName, b.lastName);
            break;
        }
        case Title:
        {
            state = strcmp(a.title, b.title);
            break;
        }
        case Year:
        {
            state = cmp(a.year, b.year);
            break;
        }
        case Birth:
        {
            if(a.birth.year != b.birth.year)
            {
                state = cmp(a.birth.year, b.birth.year);
            }
            else if(a.birth.month != b.birth.month)
            {
                state = cmp(a.birth.month, b.birth.month);
            }
            else
            {
                state = cmp(a.birth.day, b.birth.day);
            }

            break;
        }
        case Salary:
        {
            state = cmp(a.salary, b.salary);
            break;
        }
        case Phone:
        {
            state = cmp(a.phone, b.phone);
            break;
        }
    }

    if(reverse)
    {
        state = -state;
    }

    return state;
}

int cmp(int &a, int &b)
{
    return (a > b) ? 1 : ((a == b) ? 0 : -1);
}

int cmp(double &a, double &b)
{
    return (a > b) ? 1 : ((a == b) ? 0 : -1);
}

int cmp(long long &a, long long &b)
{
    return (a > b) ? 1 : ((a == b) ? 0 : -1);
}

void printEmp(Emp &emp)
{
    cout << emp.firstName << " " << emp.lastName << ", родившийся " << emp.birth.year << '.' << emp.birth.month << '.' << emp.birth.day << " работает " << emp.title << "ем с " << emp.year << " года с зарплатой " << emp.salary << " тел. +" << emp.phone << endl;
}

void shellSort(Emp *m, int n, Fields field, bool reverse)
{
    for(int i = n / 2; i > 0; i = i / 2)
    {
        for(int j = 0; j < n - i; j++)
        {
            for(int k = j; k > -1; k = k - i)
            {
                if(compare(m[k], m[k + i], field, reverse) > 0)
                {
                    swap(m[k], m[k + i]);
                }
                else
                {
                    k = 0;
                }
            }
        }
    }
}

void selSort(Emp *m, int length, Fields field, bool reverse)
{
    for(int i = 0; i < length - 1; i++)
    {
        swap(m[i], m[minFrom(m, i, length, field, !reverse)]);
    }
}

void swap(Emp &a, Emp &b)
{
    Emp t = a;
    a = b;
    b = t;
}

int minFrom(Emp* m, int position, int length, Fields field, bool reverse)
{
    int minIndex = position;
    for(int i = position + 1; i < length; i++)
    {
        if(compare(m[i], m[minIndex], field, reverse) > 0)
        {
            minIndex = i;
        }
    }
    return minIndex;
}

int regularSearch(Emp* m, int n, Fields field, Emp& key)
{
  for (int i = 0; i < n; i++)
  {
    if (compare(m[i], key, field, false) == 0)
    {
      return i;
    }
  }
  return -1;
}

int binarySearch(Emp* m, int n, Fields field, Emp& key)
{
  int l = 0;
  int r = n - 1;
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    int c = compare(m[mid], key, field, false);
    if (c == 0)
    {
      return mid;
    }
    else if (c < 0)
    {
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }
  return -1;
}