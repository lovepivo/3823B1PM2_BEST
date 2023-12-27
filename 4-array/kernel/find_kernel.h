#include <math.h>
#include <stdlib.h>
 
int f(int mas1[], int mas2[], int a1, int b1, int a2, int b2,int a3, int b3, int index){
    int c = 0;
    for (int i = 0; i < b2; i ++){
        for (int j = 0; j < a2; j ++){
            c += mas1[(i + (index / a3)) * a1 + j + (index % a3)] * mas2[i * b2 + j];
        }
    }
    return c;
}
 
int find_matrix_kernel(int matrix[], int kernel[], int matrix_row, int matrix_col, int kernel_row, int kernel_col){
    int a1 = matrix_col, b1 = matrix_row, a2 = kernel_col, b2 = kernel_row, r1 = a1 - a2, r2 = b1 - b2;
    int n = (r1 + 1) * (r2 + 1);
    int* matrix1 = matrix;
    int f1 = 1;
    while (f1){
        int a3 = r1 + 1;
        int b3 = r2 + 1;
        int* mas = (int*)malloc(sizeof(int) * n);
        for (int i = 0; i < b3; i++){
            for (int j = 0; j < a3; j++){
                int index = i * a3 + j; 
                mas[index] = f(matrix1, kernel, a1, b1, a2, b2, a3, b3, index);
            }
            
        }
        a1 = a3;
        b1 = b3;
        r1 = a1 - a2;
        r2 = b1 - b2;
        matrix1 = mas;
        if (((r1 + 1) >= 0) && ((r2 + 1) >= 0)) 
            n = (r1 + 1) * (r2 + 1);
        else 
            f1 = 0;
    }
    int c = 0;
    for (int i = 0; i < n; i++){
        c += matrix1[i];
    }
    return c;
}