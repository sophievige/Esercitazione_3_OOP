#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>

ostream& operator << (ostream& os, const ComplexNumber z){
    if (z.imag == 0){
        os << z.real;
    }
    else if (z.real==0){
        if (z.imag<0)
            os << z.imag <<"i";
        else
            os << z.imag << "i";
    }
    else{
        if (z.imag<0)
            os << z.real << z.imag <<"i";
        else
            os << z.real << "+" << z.imag << "i";
    }

    return os;
}

ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2){
    double sumR = z1.real + z2.real;
    double sumI = z1.imag + z2.imag;
    return ComplexNumber(sumR, sumI);
}

bool operator == (const ComplexNumber& z1, const ComplexNumber& z2){
    ComplexNumber mz2(-z2.real,-z2.imag);
    ComplexNumber s = z1 + mz2;
    if (sqrt(pow(s.real,2) + pow(s.imag,2)) < pow(10,-16)) //scelgo come tolleranza 10^-16
        return true;
    else
        return false;
}

ComplexNumber conjugate (const ComplexNumber& z){
    return ComplexNumber (z.real, -z.imag);
}
