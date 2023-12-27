#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int is_palindrom(char text[]){
    if (strlen(text) == 0)
        return 1;

    int count = 0;
    for (int i = 0; i < strlen(text); i++){
        if (isalpha(text[i]))
            count ++;
    }
    char* text1 = (char*)malloc(count * sizeof(char));
    int j = 0;
    for (int i = 0; i < strlen(text); i++){
        if (isalpha(text[i])){
            text1[j] = tolower(text[i]);
            j ++;
        }
    }
    int f = 0;
    for (int i = 0; i < (count / 2) - 1; i++){
        if (text1[i] == text1[count - 1 - i])
            f = 1;
        else{
            f = 0;
            break;
        }
    }
    return f;
}