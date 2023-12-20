#include <math.h>
void a1(double array[], int size){
    for (int i=0; i<size; i++){
        array[i]+=1;
    }
}
void a2(double array[], int size){
    for (int i=0; i<size; i++){
        array[i]=sqrt(array[i]);
    }
}
void a3(double array[], int size){
    double a;
    for (int i=0; i<size; i++){
        a+=array[i];
    }
    a=a/size;
    for(int i=0; i<size; i++){
        array[i]=pow(fabs(array[i]),a);
    }
}
void a4(double array[], int size){
    for (int i=0; i<size; i++){
        if ((int)array[i]%2==0) array[i]=array[i]*(-1);
        else array[i]=1.0/array[i];
    }
}
void a5(double array[], int size){
    for (int i=0; i<size; i++){
        if ((int)array[i]%2==0 && i%2==0) array[i]=0;
    }
}
void a6(double array[], int size){
    for (int i=0; i<size; i++){
        if (i<size/2){
            array[i]=-1;
        }
        else array[i]=1;
    }
}
void transform(double* array, int size, int* comands, int comands_count){
    for (int i=0; i<comands_count; i++){
        if (comands[i]==1) a1(array, size);
        if (comands[i]==2) a2(array, size);
        if (comands[i]==3) a3(array, size);
        if (comands[i]==4) a4(array, size);
        if (comands[i]==5) a5(array, size);
        if (comands[i]==6) a6(array, size);
    }
    return;
}
