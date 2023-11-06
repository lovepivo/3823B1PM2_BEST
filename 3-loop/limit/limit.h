#include <math.h>

double limit(double eps, int n_max){
    double y,y1, a, b=0;
    for (int i=1; i<=n_max; i++){
        y=i/sqrt(i*i+i);
        y1=(i+1)/sqrt((i+1)*(i+1)+(i+1));
        b=fabs(y1-y);
        if (b<eps){
            a=y1;
            return a;
        }
    }
    return y;
}