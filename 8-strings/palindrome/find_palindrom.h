#include <math.h>
#include <string.h>

int is_palindrom(char text[]){
    int a=1;
    if (strlen(text)==0) return 1;
    if ((strlen(text)%2)==0){
        for (int i=0; i<strlen(text)/2;i++){
            if (text[i]!=text[strlen(text)-i-1]){
                
                return 0;
            }
        }
    }
    for (int i=0; i<(strlen(text)/2)-1;i++){
        if (text[i]!=text[strlen(text)-i-1]){
            return 0;
        }
    }
    return 1;
}
