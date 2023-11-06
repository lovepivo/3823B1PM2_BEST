#include <math.h>

char find_digit(double number, char digit){
    if (digit<0 || digit >=10){
        return -1;
    }        
    long long int a,i;
    a=number;
    i=0;
    char k=0, b=0;
    while (a>=1){
        i+=1;
        k=a%10;
        a=a/10;
        if (b>=1){
            b+=1;
        }
        if(k==digit){
            b=1;
        }
    }
    if (b>0){
        return b;
    }
    int d=i+1;
    for (int i=1; i<20; i++){
        k=(int)(number/ pow(0.1, i))%10;
        d+=1;
        if (k==digit){
            return d;
        }
    }
    if (d==0){
        return -1;
    }
}