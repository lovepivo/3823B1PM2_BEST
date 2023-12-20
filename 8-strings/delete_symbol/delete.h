#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int j=0;
    for (int i=0; i<strlen(str);i++){
        if (str[i]!=sym){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}

