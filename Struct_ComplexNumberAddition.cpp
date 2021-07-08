#include <iostream>
using namespace std;

struct complex
{
    int real, imaginary;
};

int main()
{
    complex c1, c2, c3;

    cin>>c1.real>>c1.imaginary;
    cin>>c2.real>>c2.imaginary;

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    cout<<c3.real<<" "<<c3.imaginary<<"i";
    return 0;
}
