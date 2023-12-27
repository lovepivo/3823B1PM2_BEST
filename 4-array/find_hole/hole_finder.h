#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int a=0,b=1000000, c=0;
    for (int i=1; i<width-1; i++){
        for(int j=1; j<length-1; j++){
            a=matrix[i*width+j];
             if ((matrix[i * width + j - 1] > a) && (matrix[i * width + j + 1] > a) && (matrix[(i - 1) * width + j] > a) 
            && (matrix[(i - 1) * width + j - 1] > a) && (matrix[(i - 1) * width + j + 1] > a) && (matrix[(i + 1) * width + j] > a) 
            && (matrix[(i + 1) * width + j - 1] > a) && (matrix[(i + 1) * width + j + 1] > a) && (b > a)){
                b=a;
                c=i*100+j;
            }
        }
    }
    return c;
}