#include <iostream>
#include <cstring>
// #include <Windows.h>

using namespace std;
const int n = 80;
struct Firma 
{
    int employees;
    double rating;
    char criticsRating;
    bool isBankrupt;
    char name[n];
    int managmentAges[3];
};

struct MARSHROUTE
{
    char startStop[n];
    char endStop[n];
    int route;
};

void printFirma(Firma);
void printFirma(Firma*);
void inputFirma(Firma&);
void inputRoute(MARSHROUTE&);

int main() 
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    const int size = 2;
    Firma massiv[size];
    
    for(int i = 0; i < size; i++)
    {
        cout << "Заполнение massiv[" << i << "]:\n";
        inputFirma(massiv[i]);
        cout << endl;
    }

    cout << "Массив в виде таблицы:\n";

    for(int i = 0; i < size; i++)
    {
        printFirma(massiv[i]);
    }

    double x;
    cout << "Введите x: ";
    cin >> x;

    for(int i = 0; i < size; i++)
    {
        if(massiv[i].rating > x)
        {
            cout << "Рейтинг фирмы под индексом " << i << " - " << massiv[i].rating << " больше " << x << endl;
        }
    }

    int dSize;
    do
    {
        cout << "Введите размер массива: ";
        cin >> dSize;
    } 
    while (dSize <= 0);

    Firma *dynMassiv = new Firma[dSize];

    if(!dynMassiv)
    {
        cout << "Не удалось создать массив!\n";
        system("pause");
        return 0;
    }

    for(int i = 0; i < dSize; i++)
    {
        cout << "Заполнение dynMassiv[" << i << "]:\n";
        inputFirma(dynMassiv[i]);
        cout << endl;
    }

    cout << "Массив в виде таблицы:\n";

    for(int i = 0; i < dSize; i++)
    {
        printFirma(dynMassiv[i]);
    }

    const int s = 10;
    MARSHROUTE arr[s];
    for(int i = 0; i < s; i++)
    {
        inputRoute(arr[i]);
    }

    for(int i = 0; i < s; i++)
    {
        for(int j = i; j < s; j++)
        {
            if(strcmp(arr[i].startStop, arr[j].startStop) > 0)
            {
                MARSHROUTE tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    char busStop[n];
    bool cont;
    do
    {
        cout << "Введите название остановки: ";
        cin.ignore();
        cin.get(busStop, n);

        cout << "Все маршруты которые останавливаются на данной остановке:\n";

        int count = 0;
        for(int i = 0; i < s; i++)
        {
            if(strcmp(busStop, arr[i].endStop) == 0 | strcmp(busStop, arr[i].startStop) == 0)
            {
                cout << "Маршрут " << arr[i].route << ": " << arr[i].startStop << " - " << arr[i].endStop << endl;
                count++;
            }
        }

        if(count == 0)
        {
            cout << "Таких маршрутов нет\n";
        }

        cout << "Продолжить? 0 - Нет, 1 - Да: ";
        cin.ignore();
        cin >> cont;
    } while (cont);
    

    delete[] dynMassiv;

    system("pause");
    return 0;
}

void printFirma(Firma firm)
{
    cout << firm.employees << " | " << firm.rating << " | " << firm.criticsRating << " | " << firm.isBankrupt << " | " << firm.name << " | " << firm.managmentAges[0] << " | " << firm.managmentAges[1] << " | " << firm.managmentAges[2] << '\n';
}

void printFirma(Firma *firm)
{
    cout << firm->employees << " | " << firm->rating << " | " << firm->criticsRating << " | " << firm->isBankrupt << " | " << firm->name << " | " << firm->managmentAges[0] << " | " << firm->managmentAges[1] << " | " << firm->managmentAges[2] << '\n';
}

void inputFirma(Firma &firm)
{
    cout << "Введите количество сотрудников компании: ";
    cin >> firm.employees;
    cout << "Введите рейтинг компании: ";
    cin >> firm.rating;
    cout << "Введите буквенный рейтинг критиков компании: ";
    cin >> firm.criticsRating;
    cout << "Введите является ли компания банкротом (0 - Нет, 1 - Да): ";
    cin >> firm.isBankrupt;
    cout << "Введите наименование компании: ";
    cin.ignore();
    cin.get(firm.name, n);
    cout << "Введите возраст первого сотрудника: ";
    cin >> firm.managmentAges[0];
    cout << "Введите возраст второго сотрудника: ";
    cin >> firm.managmentAges[1];
    cout << "Введите возраст третьего сотрудника: ";
    cin >> firm.managmentAges[2];
}

void inputRoute(MARSHROUTE &route)
{
    cout << "Введите номер маршрута: ";
    cin >> route.route;
    cout << "Введите название начального пункта: ";
    cin.ignore();
    cin.get(route.startStop, n);
    cout << "Введите название конечного пункта: ";
    cin.ignore();
    cin.get(route.endStop, n);
}