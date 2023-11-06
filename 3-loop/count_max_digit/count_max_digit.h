#include <math.h>
#include <stdlib.h>


char count_max_digit(int b){
    int a[10];
    while (b!=0){
        a[((b%10)-10)*-1]+=1;
        b=(int)b/10;
    }
    for (int i; i<10; i++){
        if (a[i]!=0){
            return a[i];
        }
    }
}