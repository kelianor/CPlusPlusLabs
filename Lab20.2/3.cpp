#include <iostream>
#include <cstring>
using namespace std;
class HOMOSAPIENS 
{
public:
    virtual void printInfo() = 0;
    virtual ~HOMOSAPIENS() {}
};

class PERSON : public HOMOSAPIENS 
{
protected:
    char name[15];
    int age;
public:
    PERSON(char* n, int a = 0) 
    {
        strncpy(name, n, 14);
        age = a;
    }

    void setName(char* n) 
    { 
        strncpy(name, n, 14);
    }
    void setAge(int a) 
    { 
        age = a; 
    }

    char* getName()
    { 
        return name; 
    }
    int getAge()
    { 
        return age; 
    }

    void printInfo() override 
    {
        cout << "Имя: " << name << ", Возраст: " << age << endl;
    }
};

class EMPLOYEE : public PERSON {
private:
    char position[30];
    double salary;

public:
    EMPLOYEE(char *n, int a, char *pos, double sal) : PERSON(n, a) 
    {
        strncpy(position, pos, 29);
        salary = sal;
    }

    void setPosition(char* pos) 
    { 
        strncpy(position, pos, 29); 
    }
    void setSalary(double sal) 
    { 
        salary = sal; 
    }

    double calculateTotalSalary(double bonusPercent) {
        return salary + (salary * bonusPercent / 100.0);
    }

    void printInfo() 
    {
        PERSON::printInfo();
        cout << "Должность: " << position << ", Оклад: " << salary << endl;
    }
};

int main() {
    PERSON p1("Иван", 25);
    p1.printInfo();
    p1.setAge(26);
    p1.printInfo();

    EMPLOYEE emp("Алексей", 30, "Инженер", 50000);
    emp.printEmployee();

    double bonus = 15.5;
    cout << "Зарплата с премией " << bonus << "%: " << emp.calculateTotalSalary(bonus) << endl;

    return 0;
}
