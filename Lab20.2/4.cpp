#include <iostream>
using namespace std;
class Point {
protected:
    double x, y;
public:
    Point(double setX = 0, double setY = 0) : x(setX), y(setY) {}
    virtual ~Point() {}

    virtual double Length() = 0;
    
    virtual double getX() 
    { 
        return x;
    }
    virtual double getY() 
    {
        return y; 
    }
};

class Rectangle : public Point {
protected:
    double x2, y2;
public:
    Rectangle(double x1, double y1, double x2, double y2) : Point(x1, y1), x2(x2), y2(y2) {}

    void printVertices() {
        cout << x << '\t' << y << endl;
        cout << x2 << '\t' << y2 << endl;
    }

    double Length() {
        double width = abs(x2 - x);
        double height = abs(y2 - y);
        return 2 * (width + height);
    }

    void getCorners(double& cx1, double& cy1, double& cx2, double& cy2)
    {
        cx1 = x; 
        cy1 = y; 
        cx2 = x2; 
        cy2 = y2;
    }
};

class SimplePoint : public Point 
{
public:
    SimplePoint(double x, double y) : Point(x, y) {}
    double Length() override 
    { 
        return 0; 
    }
};

int main() {
    const int size = 4;
    Point *arr[size] = {new SimplePoint(1.5, 2.0), new SimplePoint(3.5, 6.9), new Rectangle(0.0, 0.0, 5.0, 5.0), new Rectangle(0.0, 0.0, 5.0, 5.0)};
    double sumX = 0;
    double sumY = 0;
    int rects = 0;
    for(int i = 0; i < size; i++)
    {
        cout << "Периметр: " << arr[i]->Length() << endl;

        Rectangle* rect = dynamic_cast<Rectangle*>(arr[i]);
        if (rect) 
        {
            rect->printVertices();
            double x1, y1, x2, y2;
            rect->getCorners(x1, y1, x2, y2);
           
            sumX += (x1 + x2 + x1 + x2);
            sumY += (y1 + y1 + y2 + y2);
            rects+=4;
        }
    }
    sumX /= (double)rects;
    sumY /= (double)rects;

    cout << "X: " << sumX << endl;
    cout << "Y: " << sumY << endl;
    return 0;
}
