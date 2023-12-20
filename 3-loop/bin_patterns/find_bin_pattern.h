#include <math.h>

char find_bin_pattern(int x){
    int a=0,b=0;
    while (x!=0){
        if (x%2==1){
            if (a==0){
                a=1;
            }
            else if (a==2){
                b+=1;
                a=1;
            }
            else a=1;
        }
        if (x%2==0){
            if (a==1){
                a=2;
            }
            else a=0;
        }
        x/=2;
    }
    return b;
}