#include <math.h>
#include <string.h>
#include <ctype.h>

double convert(char num[]){
    long long int a1 = 0;
    long long int b1 = 0;
    long long c1 = 1;
    int a = 1;
    int b = 1;
    for (int i = 0; i < strlen(num); i++){
        if ((i == 0) && (num[i] == '-'))
            a *= (-1);
        else if ((num[i] >= 48) && (num[i]) <= 57){
            if (b == 1){
                a1 = a1 * 10 + (num[i] % 48);
            }
            else{
                b1 = b1 * 10 + (num[i] % 48);
                c1 *= 10;
            }
        }
        else 
            b = 0;
    }
    return ((double)a1 + (double)b1 / c1) * a ;
}