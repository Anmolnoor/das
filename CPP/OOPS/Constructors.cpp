#include <iostream>
using namespace std;

class Rectangle
{
    int length, breath;

public:
    // constructor
    Rectangle(){    // this is a constructor for default values for the Rectangle
        length = 0;
        breath = 0;
    }
    // this is a constructor with default values of the perameters for the Rectangle
    // this is also work as function overloading as a constructor overloading...
    Rectangle(int l=0, int b=0){ 
        (l>=0)?length = l:length =1;
        (b>=0)?breath = b:breath =1;
    }

    // property functions
    void setLength(int l)
    {
        (l >= 0) ? length = l : length = 1;
    }
    void setBreath(int b)
    {
        (b >= 0) ? breath = b : breath = 1;
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

int main() {
    Rectangle r(10,5);
    cout<<"Lenght is :" << r.getLength() << endl;
    cout<<"Breath is :" << r.getBreath() << endl;
    cout<< "Area of Rectangle : " << r.area() << endl;
    cout<< "Perimeter of Rectangle : " << r.perimeter() << endl;
    return 0;
}