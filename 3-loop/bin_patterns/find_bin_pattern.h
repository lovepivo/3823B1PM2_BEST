#include <math.h>

char find_bin_pattern(int number){
    int a[10000], i;
    while (number>=2){
        a[i]=number%2;
        number/=2;
        i+=1;
    }
    a[i]=number;
    i=0;
    for(int j; j<number-2; j++){
        if (a[j]==1 && a[j+1]==0 && a[j+2]==1){
            i+=1;
        }
    }
    return i;
}