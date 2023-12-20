#include <math.h>

int* array_generator(int* real_size, int k, int m, int f){
    *real_size=20;
    int* a=(int*)malloc(*real_size*sizeof(int));
    int b=1;
    a[0]=0;
    a[1]=f;
    for (int i=2; i<20; i++){
        a[i]=0;
    }
    return a;
}
