#include <iostream>
#include <cstring>
// #include <Windows.h>

using namespace std;
const int n = 64;
struct Firma 
{
    int employees;
    double rating;
    char criticsRating;
    bool isBankrupt;
    char name[n];
    int managmentAges[3];
};

void printFirma(Firma);
void printFirma(Firma*);
void inputFirma(Firma&);

int main() 
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    Firma VarkaNaRokossovskogo = {5, 4.7, 'A', false, "Varka на Рокоссовского", {21, 23, 28}};

    Firma KBP;
    KBP.employees = 89;
    KBP.rating = 4.1;
    KBP.criticsRating = 'A';
    KBP.isBankrupt = false;
    strcpy(KBP.name, "Калледж Бізнесу і Права");
    KBP.managmentAges[0] = 52;
    KBP.managmentAges[0] = 46;
    KBP.managmentAges[0] = 39;

    printFirma(VarkaNaRokossovskogo);
    printFirma(KBP);

    Firma user;
    inputFirma(user);
    printFirma(user);

    Firma BSUIR;
    Firma *pBSUIR = &BSUIR;
    
    pBSUIR->employees = 126;
    pBSUIR->rating = 3.9;
    pBSUIR->criticsRating = 'A';
    pBSUIR->isBankrupt = false;
    strcpy(pBSUIR->name, "БГЭУ");
    pBSUIR->managmentAges[0] = 64;
    pBSUIR->managmentAges[1] = 69;
    pBSUIR->managmentAges[2] = 54;

    printFirma(pBSUIR);

    Firma Evroopt;
    Firma &refEvroopt = Evroopt;

    refEvroopt.employees = 1256;
    refEvroopt.rating = 3.7;
    refEvroopt.criticsRating = 'A';
    refEvroopt.isBankrupt = false;
    strcpy(refEvroopt.name, "Евроопт");
    refEvroopt.managmentAges[0] = 52;
    refEvroopt.managmentAges[1] = 46;
    refEvroopt.managmentAges[2] = 39;

    printFirma(refEvroopt);

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