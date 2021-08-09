#include <iostream>
using namespace std;

class complex
{
    public:
    int x, y;
    complex(int x1=0, int y1=0) : x(x1), y(y1)
    {

    }

    complex operator + (complex &b)
    {
        complex res;
        res.x = x + b.x;
        res.y = y + b.y;
        return res;
    }

    void print()
    {
        cout<<x<<" + "<<y<<"i";
    }
} ;

int main()
{
    complex c1(1,2), c2(1,2);
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}