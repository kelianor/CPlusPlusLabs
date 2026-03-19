#include <iostream>
#include <Windows.h>
using namespace std;

class Parent
{
public:
  int a;
  Parent(int a0, double b0, char c0)
  {
    a = a0;
    b = b0;
    c = c0;
  }
protected:
  double b;
private:
  char c;
};
class Child1 : public Parent
{
public:
  bool d;
public:
  Child1(int a1, double b1, char c1, bool d1) : Parent(a1, b1, c1)
  {
    d = d1;
    cout << Parent::a << ' ' << Parent::b << endl;
  }
};

class Child2 : protected Parent
{
protected:
  float e;
public:
  Child2(int a2, double b2, char c2, float e2) : Parent(a2, b2, c2)
  {
    e = e2;
    cout << Parent::a << ' ' << Parent::b << endl;
  }
};
class Child3 : private Parent
{
private:
  short f;
public:
  Child3(int a3, double b3, char c3, short f3) : Parent(a3, b3, c3)
  {
    f = f3;
    cout << Parent::a << ' ' << Parent::b << endl;
  }
};

class Grandchild1 : public Child1
{
  public:
  Grandchild1(int a4, double b4, char c4, bool d4):Child1(a4,b4,c4,d4)
  {
    cout << Child1::a << ' ' << Child1::b << ' ' << Child1::d << ' ' << Parent::a << ' ' << Parent::b << endl;
  }
};
class Grandchild2 : protected Child2
{
public:
  Grandchild2(int a5, double b5, char c5, float e5) : Child2(a5, b5, c5, e5)
  {
    cout << Child2::a << ' ' << Child2::b << ' ' << Child2::e << ' ' << Parent::a << ' ' << Parent::b << endl;
  }
};
class Grandchild3 : private Child3
{
public:
  Grandchild3(int a5, double b5, char c5, short f5) : Child3(a5, b5, c5, f5)
  {
    //все поля класса Child3 и Parent недоступны
  }
};

int main()
{
  Parent p(1, 2.2, 'A');
  p.a = 0;
  Child1 c(2, 3.3, 'B', 1);
  c.a = 1;
  c.d = false;
  Grandchild1 g(3, 4.4, 'C', 0);
  g.a = 2;
  g.d = true;
  Child2 c2(4, 5.5, 'D', 4.9);
  Child3 c3(5, 6.6, 'E', 4);
  Grandchild2 g2(6, 7.7, 'F', 6.987);
  Grandchild3 g3(7, 8.8, 'G', 6);
  system("pause");
  return 0;
}