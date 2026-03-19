#include <iostream>
#include <cmath>
using namespace std;

class Line
{
    protected:
    double L1;
    public:
    virtual void show()
    {
        cout << "Length 1: " << L1 << endl;
    }
    virtual double square() =0;
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
    void show() override
    {
        Line::show();
        cout << "Length 2: " << L2 << endl;
        cout << "Height: " << H << endl;
    }
    double square() override
    {
        return (L1 + L2) * H / 2.0;
    }
};

class Parallelogram : public Trapezoid
{
    public:
    Parallelogram(double L, double H) : Trapezoid(L, L, H) {}
    Parallelogram() : Trapezoid(5.0, 5.0, 7.0) {}
    double square() override
    {
        return L1  * H;
    }
    void show() override
    {
        cout << "Parallelogram:\n";
        Trapezoid::show();
    }
};

int main()
{
    
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
    
    cout << "\nTrapezoid array\n";
    Trapezoid mas[5];
    for(int i = 0; i < 5; i++)
    {
        mas[i].show();
        cout<< "S = " << mas[i].square() << endl;
    }
    
    cout << "\nParallelogram array\n";
    Parallelogram mas[5];
    for(int i = 0; i < 5; i++)
    {
        mas[i].show();
        cout<< "S = " << mas[i].square() << endl;
    }
    
    cout << "\nLine array\n";

    int size;
    cout << "Size: ";
    cin >> size;
    Line *arr = new Line[size];
    if(arr == nullptr)
    {
        return 0;
    }
    
    for(int i = 0; i < size; i++)
    {
        int choice;
        cout << "1 - Trapezoid, 2 - Paralleogram: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                arr[i] = *(new Trapezoid);
                break;
            }
            case 2:
            {
                arr[i] = *(new Parallelogram);
                break;
            }
            arr[i].show();
            cout << "Square: " << arr[i].square() << endl;
            delete arr[i];
        }
    }
    delete arr;
    return 0;
}