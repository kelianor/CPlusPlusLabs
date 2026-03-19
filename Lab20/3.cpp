#include <vector>
#include <string>
#include <typeinfo>

using namespace std;

class Uchashisya {
    protected:
    string name;
    int age;

    public:
    Uchashisya(string n, int a) : name(n), age(a) {}
    virtual ~Uchashisya() {}

    virtual void show() {
        cout << "Учащийся:\n";
        cout << "Имя: " << name << ", Возраст: " << age;
    }
};

class Shkolnik : public Uchashisya {
    int grade;

    public:
    Shkolnik(string n, int a, int g) : Uchashisya(n, a), grade(g) {}

    void show() override {
        cout << "Школьник:\n";
        Uchashisya::show();
        cout << "Класс: " << grade << endl;
    }
};

class Student : public Uchashisya {
    string university;
    public:
    Student(string n, int a, string uni) : Uchashisya(n, a), university(uni) {}

    void show() override {
        cout << "Студент:\n";
        Uchashisya::show();
        cout << "ВУЗ: " << university << endl;
    }
};

int main() {
    int size = 4;
    Uchashisya* community[size];

    community[0] = new Shkolnik("Иван Иванов", 12, 6);
    community[1] = new Student("Анна Петрова", 20, "МГТУ");
    community[2] = new Shkolnik("Сергей Сидоров", 15, 9);
    community[3] = new Student("Дмитрий Соколов", 22, "МГУ");

    cout << "Shkolniki:\n";
    for (int i = 0; i < size; i++) {
        if (dynamic_cast<Shkolnik*>(community[i])) {
            community[i]->show();
        }
    }

    cout << "Студенты:\n";
    for (int i = 0; i < size; i++) {
        if (dynamic_cast<Student*>(community[i])) {
            community[i]->show();
        }
    }

    for (int i = 0; i < size; i++) {
        delete community[i];
    }

    return 0;
}