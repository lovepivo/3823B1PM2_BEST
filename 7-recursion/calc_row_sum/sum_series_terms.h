#include <math.h>

double f(int m, int n){
    if (n==m) return 0;
    else return 1.0/n+f(m, n-1);
}

double sum_series(int n){
    int a=1, b=10000;
    double c=0;
    if (n<1) return -1;
    if (n<10000) return f(1, n)+1;
    while (n!=-2){
        c+=f(a, b);
        if (b==n) break;
        a=b;
        if (b+10000>n) b=n;
        else b+=1000;
    }
    return c+1;
}
