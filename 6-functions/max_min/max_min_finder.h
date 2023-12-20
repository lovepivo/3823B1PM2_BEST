#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    int max=-10000;
    int min =10000;
    for (int i=0; i<size; i++){
        if (array[i]>max) max=array[i];
        if (array[i]<min) min=array[i];
    }
    *pMax=max;
    *pMin=min;
    return;
}
