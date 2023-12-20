#include <math.h>
void f(int array[], int s, int n){
    int a=array[s-n-1];
    array[s-n-1]=array[n];
    array[n]=a;
    if (n!=0) return f(array, s, n-1);
}

void reverse_array(int* array, int array_size){
    if (array_size>1) return f(array, array_size, (array_size/2)-1);

}
