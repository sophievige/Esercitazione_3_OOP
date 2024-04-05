#include <iostream>
using namespace std;

struct ComplexNumber{
    double real;
    double imag;

    ComplexNumber()=default;
    ComplexNumber(double a, double b){
        real=a;
        imag=b;
    }
};

ostream& operator << (ostream& os, const ComplexNumber z);

ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2);

bool operator == (const ComplexNumber& z1, const ComplexNumber& z2);

ComplexNumber conjugate (const ComplexNumber& z);
