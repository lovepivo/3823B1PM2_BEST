#include <math.h>

unsigned long long calc_e(char a){
    double b=1.0/pow(10, a);
    double e=2.718281828;
    int i=1;
    while (i!=-1){
        double c=pow((1.0+1.0/i), i);
        if ((int)(e*pow(10,a))==(int)(c*pow(10,a))){
            return i;
        }
        i++;
    }
    return 0;
}