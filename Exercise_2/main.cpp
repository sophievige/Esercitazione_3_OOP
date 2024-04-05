#include "ComplexNumber.hpp"
#include <cmath>

using namespace std;
int main()
{
    ComplexNumber z;
    ComplexNumber z1(1,2);
    ComplexNumber z2(1,-2);
    ComplexNumber z3(0,-1);
    ComplexNumber z4(-1,0);
    ComplexNumber z5(0,0);

    cout << z1 << endl;
    cout << z2 << endl;
    cout << z3 << endl;
    cout << z4 << endl;
    cout << z5 << endl;

    ComplexNumber s = z1+z2;
    cout << s << endl;

    bool f = z1==z2;
    ComplexNumber z6(pow(10,-17),0);
    bool t = z5 == z6;
    cout << f << endl;
    cout << t << endl;

    ComplexNumber z1c = conjugate(z1);
    cout << z1c << endl;
    cout << (z1c == z2) << endl;

    return 0;
}
