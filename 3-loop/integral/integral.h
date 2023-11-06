#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double a1=(a/3)*pow(left, 3)+(b/2)*(left*left)+c*left, b1=(a/3)*pow(right, 3)+(b/2)*(right*right)+c*right;
    return b1-a1;
}