#include <math.h>

int calc_percent(int matrix[], int size){
    int min=999999, max=-999999, q=0;
    double a;
    for (int i=0; i<size; i++){
        if (matrix[i]<min) min=matrix[i];
        if (matrix[i]>max) max=matrix[i];
    }
    a=(max-min)/2;
    for (int i=0; i<size; i++){
        if (matrix[i]>a){
            q+=1;
        }
    }
    return ((double)q/size)*100;
}