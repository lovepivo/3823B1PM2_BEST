#include <math.h>

int QuadraticEquation(double a, double b, double c){
    double x1,x2,d;
    d=b*b-4*a*c;
    x1=(-b+sqrt(fabs(d)))/(2*a);
    x2=(-b-sqrt(fabs(d)))/(2*a);
    return round(x1+x2);
}