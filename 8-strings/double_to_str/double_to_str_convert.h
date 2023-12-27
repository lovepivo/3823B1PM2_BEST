#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

char* convert(double number1){
    double number = number1;  
    if (number1 < 0)
        number = (-1) * number1;

    int a = (int)number;
    int b = (int)number;
    int n = 0;
    while (b != 0){
        b /= 10;
        n ++;
    }
    double c = number - a;
    int d = 0;
    int f = 1;
    int n1 = 0;
    while (f){
        if (n1 == 4){
            f = 0;
            d = c;
            }
        else{ 
            c *= 10;
            n1 += 1;
            int t = (int)c % 10;
            if (t == 9){
                f = 0;
                c /= 10;
                c ++;
                d = c;
                n1 -= 1;
                }
        }
    }
    int k = 0;
    char* str = (char*)malloc(sizeof(char) * 100);
    if (number1 < 0){
        str[0] = 45;
        k++;
    }
    for (int i = 0; i < n; i ++){
        str[n + k - 1 - i] = a % 10 + 48;
        a /= 10;
    }
    k += n;
    str[k] = 46;
    k++;
    for (int i = 0; i < n1; i ++){
        str[n1 + k - 1 - i] = d % 10 + 48;
        d /= 10;
    }
    
    k += n1;
    if (d < 0){
        str[k] = 48;
        k++;
    }
    str[k] = 0;  
    return str;
}