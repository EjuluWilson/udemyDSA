#include <iostream>

using namespace std;

class Rectangle
{
protected:
    int width = 3;
    int height = 8;

public:
    Rectangle(int a, int b)
    {
        width = a;
        height = b;
    }
    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }

    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

class Square : public Rectangle
{
public:
    Square(int s) : Rectangle(s, s)
    {
        width = s;
        height = s;
    }
};

int main()
{
    Rectangle a(2, 4);
    Rectangle b(10, 8);

    cout << a.getHeight() << endl;
    cout << a.getWidth() << endl;
    cout << b.getHeight() << endl;
    cout << b.getWidth() << endl;

    a.setHeight(17);
    b.setWidth(80);
    b.setWidth(20);
    b.setHeight(17);

    cout << a.getHeight() << endl;
    cout << a.getWidth() << endl;
    cout << b.getHeight() << endl;
    cout << b.getWidth() << endl;

    return 0;
}
