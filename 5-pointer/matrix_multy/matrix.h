#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int* a=(int*)malloc(aM*bM*sizeof(int));
    if (aN!=bM) return NULL;
    for (int i=0; i<aM*bN; i++)
        a[i]=0;
    for (int j=0; j<aM*bN; j++){
        for (int i=0; i<aN; i++){
            a[j]+=A[aN*(j/aM)+i]*B[bN*i+(j%bN)];
        }
    }
    return a;
}
