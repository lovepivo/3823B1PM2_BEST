#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int f(int matrix[], int size, int a1){
    int a = 1;
    int b = 0;
    int c = sqrt(size);
    if ((sqrt(size) - (double)c) > 0.000000000001)
        return -404;
    if (c == 2){
        return (matrix[0] * matrix[3] - matrix[1] * matrix[2]) * a1;
        }
    
    if (c > 2){
        for (int k = 0; k < c; k++){
            int r = (c - 1) * (c - 1); 
            int n[r];
            int w = 0;
            for (int i = 0; i < c; i ++){
                for (int j = 0; j < c; j ++){
                    if ((j != k) && ((i * c + j) >= c)){
                        n[w] = matrix[i * c + j];
                        w ++;
                        }
                }      
            }
            if (k % 2 == 0)
                a = matrix[k];
            else 
                a = (-1) * matrix[k];
            a *= a1;
            b += f(n, r, a);
        }
    }

    return b;
}


double kramer_method(int* matrix, int* vector, int size){
    int a1 = 1;
    int r1 = size * size;
    int* matr0 = matrix;
    int del = f(matr0, r1, a1);
    if (del == 0)
        return -1;
    
    int* matr1 = (int*)malloc(r1 * sizeof(int));
    int* matr2 = (int*)malloc(r1 * sizeof(int));
    int* matr3 = (int*)malloc(r1 * sizeof(int));
    int* vect = (int*)malloc(size * sizeof(int));
    for (int k = 0; k < r1; k ++){
        matr1[k] = matrix[k];
        matr2[k] = matrix[k];
        matr3[k] = matrix[k];
        
    }
    for (int k = 0; k < size; k ++){
        vect[k] = vector[k];
    }
   
    for (int i = 0; i < size; i++){
        matr1[size * i] = vect[i];
        matr2[size * i + 1] = vect[i];
        matr3[size * i + 2] = vect[i]; 
    }
    
    int del1 = f(matr1, r1, a1);
    int del2 = f(matr2, r1, a1);
    int del3 = f(matr3, r1, a1);
    
    double otv;
    if (size == 3)
        otv = (double)del1 / (double)del + (double)del2 / (double)del + (double)del3 / (double)del;
    if (size == 2)
        otv = (double)del1 / (double)del + (double)del2 / (double)del;
    return otv;
}