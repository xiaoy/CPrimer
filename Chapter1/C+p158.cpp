#include<iostream>
using namespace std;
class TDshape
{
    public:
    virtual void area() = 0;
    virtual void printName() = 0;
};
class Triangle : public TDshape
{
    private:
    double width, height;
    public:
    Triangle(double w, double h):width(w),height(h){}
    double geiWidth(){return width;}
    void setWidth(double w){width = w;}
    void area(){cout<< "三角形的面积为：" << 0.5*width*height << endl;}
    void printName(){cout << "Triangle" << endl;}
};
class Rectangle : public TDshape
{
    private:
    double width, height;
    public:
     Rectangle(double w, double h):width(w), height(h){}
    double getHeight(){return height;}
    void setHeight(double h){height = h;}
    void area (){cout << "矩形的面积为：" << width*height << endl;}
    void printName(){cout << "Rectangle " << endl;}
};
int main()
{
    TDshape *p;
    cout << "Please input Triangle width and height:" << endl;
    double m, n;
    cin >> m >> n;
    Triangle a(m, n);
    p = &a;
    p->area();
    cout << "Please input Rectangle width and height:" << endl;
    double x, y;
    cin >> x >> y;
    Rectangle b(x, y);
    TDshape &F = b;
    F.area();
    return 0;
}


