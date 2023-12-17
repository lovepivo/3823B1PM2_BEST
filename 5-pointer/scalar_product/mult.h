#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double a=0.0, b=0.0, c=0.0;
    double q,z,w, p=3.1415926535;
    for (int i=0; i<size; i++){
        a+=vec1[i]*vec1[i];
        b+=vec2[i]*vec2[i];
        c+=vec1[i]*vec2[i];
    }
    z=sqrt(a*b);
    w=acos(c/z);
    q=w*180/p;
    return (int)q;
}
