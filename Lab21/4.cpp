#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        if (s != nullptr) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = new char[1];
            str[0] = '\0';
        }
    }

    // Конструктор копирования другой строки
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        cout << "Сработал конструктор копирования!\n";
    }

    // Деструктор
    ~MyString() {
        delete[] str;
    }

    // Перегрузка оператора ! для преобразования в заглавные символы
    MyString& operator!() {
        for (size_t i = 0; i < strlen(str); i++) {
            str[i] = toupper((unsigned char)str[i]);
        }
        return *this;
    }

    void Print() const {
        cout << "Строка: " << str << endl;
    }
};

int main() {
    cout << "Создаем первую строку:\n";
    MyString str1("hello world, variant 11!");
    str1.Print();

    cout << "\nКопируем строку (создаем вторую):\n";
    MyString str2 = str1;
    str2.Print();

    cout << "\nПрименяем перегруженный оператор ! ко второй строке:\n";
    !str2;
    str2.Print();

    return 0;
}