#include <math.h>
#include <stdlib.h>


char count_max_digit(long long b){
    b=fabs(b);
    int a[10]={0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (b!=0){
        a[b%10]+=1;
        b=b/10;
    }
    for (int i=9; i>-1; i--){
        if (a[i]!=0){
            return a[i];
        }
    }
}