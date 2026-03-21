#include <iostream>
using namespace std;

class Dot {
protected:
    int x, y;

public:
    virtual void show() {
        cout << "Dot with coordinates X: " << x << ", Y: " << y << endl;
    }

    Dot(int x0, int y0) : x(x0), y(y0) {}
    Dot() {}
};

class Line : public Dot {
protected:
    int x1, y1;

public:
    void show() override {
        cout << "Line between 1";
        Dot::show();
        cout << "and 2Dot with coordinates X1: " << x1 << ", Y1 : " << y1 << endl;
    }

    Line(int x0, int y0, int x1_val, int y1_val) : Dot(x0, y0), x1(x1_val), y1(y1_val) {}
    Line() {}
};

int main() {
    Dot a(0, 1);
    Dot* b = new Dot(2, 3);
    Line c(4, 5, 6, 7);
    Line* d = new Line(8, 9, 10, 11);

    a.show();
    b->show();
    c.show();
    d->show();

    int n = 3, f = 0, xA, xB, yA, yB;
    cout << "n: ";
    cin >> n;

    Dot** mas = new Dot*;

    for (int i = 0; i < n; i++) {
        cout << "\nCreate 0-Dot or 1-Line? ";
        cin >> f;
        cin >> xA >> yA;

        if (f == 0) {
            mas[i] = new Dot(xA, yA);
        }
        else {
            cin >> xB >> yB;
            mas[i] = new Line(xA, yA, xB, yB);
        }
    }

    for (int i = 0; i < n; i++) {
        mas[i]->show();
    }

    system("pause");
    return 0;
}
