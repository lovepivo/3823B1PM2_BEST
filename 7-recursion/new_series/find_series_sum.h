#include <math.h>
double f(int n){
    if (n==0) return 0;
    else return (f(n-1)+1.0)/n;
}

double f1(int a, int b, double c){
    c+=f(b);
    if (a!=b){
        return f1(a, b+1, c);
    }
    else return c;
}


double find_sum_elements_series(int k){
    double c=0.0;
    if (k==0){
        return 0;
    }
    if (k<0) return -1;
    c=f1(k-1, 0, c);
    return c;
}
