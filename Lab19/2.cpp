#include <iostream>
#include <cmath>
using namespace std;

class Line
{
    protected:
    double L1;
    public:
    void show()
    {
        cout << "Length 1: " << L1 << endl;
    }
    Line(double len)
    {
        if(len > 0)
        {
            L1 = len;
        }
    }
    Line() : Line(5.6) {}
};

class Trapezoid : public Line 
{
    protected:
    double L2;
    double H;
    public:
    Trapezoid(double L1, double L2, double H) : Line(L1)
    {
        this->L2 = L2;
        this->H = H;
    }
    Trapezoid() : Trapezoid(5, 6, 7) {}
    void show()
    {
        Line::show();
        cout << "Length 2: " << L2 << endl;
        cout << "Height: " << H << endl;
    }
    double square()
    {
        return (L1 + L2) * H / 2.0;
    }
};

class Parallelogram : public Trapezoid
{
    public:
    Parallelogram(double L, double H) : Trapezoid(L, L, H) {}
};

int main()
{
    cout << "\nLine:\n";
    Line a(5.45);
    a.show();
    
    cout << "\nDynamic line:\n";
    Line *b = new Line(6.69);
    b->show();
    
    cout << "\nTrapezoid:\n";
    Trapezoid c(7.8, 6.0, 3.5);
    c.show();
    cout<< "S = " << c.square() << endl;
    
    cout << "\nDynamic trapezoid:\n";
    Trapezoid *d = new Trapezoid(7.0, 6.0, 9.0);
    d->show();
    cout<< "S = " << d->square() << endl;
    
    cout << "\nParallelogram:\n";
    Parallelogram e(6.9, 3.5);
    e.show();
    cout<< "S = " << e.square() << endl;
    
    cout << "\nDynamic parallelogram:\n";
    Parallelogram *f = new Parallelogram(7.0, 9.0);
    f->show();
    cout<< "S = " << f->square() << endl;
    
    
    cout << "\nParallelogram array\n";
    Trapezoid mas[5];
    for(int i = 0; i < 5; i++)
    {
        mas[i].show();
        cout<< "S = " << mas[i].square() << endl;
    }
    
    cout << "\nLine array\n";
    Line *arr[3] = {b, d, f}; 
    for(int i = 0; i < 3; i++)
    {
        arr[i].show();
    }
    return 0;
}
