#include <iostream>
using namespace std;

class Rectangle
{
    int length, breath;

public:
    void setLength(int l)
    {
        (l >= 0) ? length = l : length = 0;
    }
    void setBreath(int b)
    {
        (b >= 0) ? breath = b : breath = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreath()
    {
        return breath;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};

int main()
{
    Rectangle *q = new Rectangle();
    q->setLength(20);
    q->setBreath(10);
    cout << "Lenght is : " << q->getLength() << endl
         << "Breath is : " << q->getBreath() << endl;
    cout << "Area is : " << q->area() << endl;
    cout << "Perimeter is : " << q->perimeter() << endl;
    return 0;
}