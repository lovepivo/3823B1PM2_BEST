#include <math.h>

int a1(int array[], int array_size, int subarray[], int subarray_size){
    int f=-1;
    int c=0;
    for (int i=0; i<array_size; i++){
        if (array[i]==subarray[0]){
            for (int j=0; j<subarray_size; j++){
                if (array[i+j]==subarray[j]){
                    f=i;
                    c=1;
                } 
                else{
                    f=-1;
                    c=0;
                    break;
                }
            }
            if (c==1) break;
        }

    }
    return f;
}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int a,b,c;
    a=a1(array,array_size, subarray1, subarray_size1);
    b=a1(array,array_size, subarray2, subarray_size2);
    c=a1(array,array_size, subarray3, subarray_size3);
    return a+b+c;
}
