#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

class Human {
private:
    int age;
    double weight;
    bool sex;
    char* name;

public:
    int GetAge() { return age; }
    int SetAge(int a) {
        if (a > 0 && a < 150) {
            age = a;
            return age;
        }
        return -1;
    }

    double GetWeight() { return weight; }
    double SetWeight(double w) {
        if (w > 0 && w < 1000) {
            weight = w;
            return weight;
        }
        return -1;
    }

    bool GetSex() { return sex; }
    bool SetSex(bool s) {
        sex = s;
        return sex;
    }

    char* GetName() { return name; }
    char* SetName(char* n) {
        if (n != NULL && strlen(n) > 0) {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            return name;
        }
        return NULL;
    }

    int CelebrateBirthday() {
        int a = GetAge();
        SetAge(++a);
        return GetAge();
    }

    double EatFood(double f) {
        double w = GetWeight();
        SetWeight(w + f * 0.75);
        return GetWeight();
    }

    void Show() {
        if (GetName() != NULL) cout << GetName() << " ";
        cout << GetAge() << " " << GetWeight() << " kg ";
        if (GetSex()) cout << "male" << endl;
        else cout << "female" << endl;
    }

    Human() {
        age = 0;
        weight = 0;
        sex = false;
        name = NULL;
    }

    Human(int a, double w, bool s, char* n) {
        age = a;
        weight = w;
        sex = s;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~Human() {
        delete[] name;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Human h;
    h.Show();
    h.SetName((char*)"Jack");
    h.SetAge(20);
    h.SetWeight(68.77);
    h.SetSex(true);
    h.Show();

    h.CelebrateBirthday();
    h.EatFood(0.22);
    h.Show();

    Human* h1 = new Human();
    if (h1 == NULL) {
        cout << "Ошибка создания экземпляра класса Human. Оперативная память под объект не выделена.\n";
        system("pause");
        return 0;
    }

    char n[255];
    cout << "Введите имя человека: ";
    cin.getline(n, 255);
    h1->SetName(n);

    int a;
    cout << "Введите возраст человека (полных лет): ";
    cin >> a;
    h1->SetAge(a);

    double w;
    cout << "Введите вес человека (кг.граммы): ";
    cin >> w;
    h1->SetWeight(w);

    bool s;
    cout << "Укажите пол человека (0-женский, 1-мужской): ";
    cin >> s;
    h1->SetSex(s);

    h1->Show();

    Human h2(22, 54.3, false, (char*)"Maria");
    h2.Show();

    Human* h3 = new Human(30, 90.1, true, (char*)"Petr");
    if (h3 == NULL) {
        cout << "Ошибка создания экземпляра класса Human. Оперативная память под объект не выделена.\n";
        system("pause");
        return 0;
    }
    h3->Show();

    typedef void (Human::*Action)();
    Action act = &Human::Show;
    (h.*act)();
    (h1->*act)();

    typedef int (Human::*Function)(int);
    Function fun = &Human::SetAge;
    (h2.*fun)(25);
    (h3->*fun)(35);

    typedef int (Human::*Birthday)();
    Birthday bday = &Human::CelebrateBirthday;
    cout << (h.*bday)() << endl;
    cout << (h1->*bday)() << endl;

    delete h1;
    delete h3;

    system("pause");
    return 0;
}
