#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    int a=left,b;
    while(left<=right){
        i+=1;
        b=(left+right)/2;
        if (number>b){
            left=b+1;
        }
        else if (number==b){
            return((number-a)*i);
        }
        else{
            right=b-1;
        }
    }

    return i; //НЕ МЕНЯТЬ!
}