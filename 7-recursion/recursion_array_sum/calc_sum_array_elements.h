#include <math.h>

double f(int array[], int s){
    if (s==0) return array[0];
    return array[s]+f(array,s-1);
}
double calc_sum_elements(int* array, int array_size){
    if (array_size<=0) return -1;
    return f(array, array_size-1);
}
