#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void write_smile(char filename[], char smile_names[]){
    int len = strlen(smile_names);
    char m[50];
    for (int i = 0; i < 50; i++)
        m[i] = '0';
    FILE* fl;
    fl = fopen(filename, "w");
    int k = 0;
    for (int i = 0; i < len; i ++){
        if (smile_names[i] != ','){
            m[k] = smile_names[i];
            k ++;
        }
        if ((smile_names[i] == ',') || (i == len - 1)){ 
            i ++;
            m[k] = '\0';
            if (strcmp(m, "smile") == 0){
                fputc('(', fl);
                fputc('n', fl);
                fputc('_', fl);
                fputc('n', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "uh...oh") == 0){//"uh...oh"
                fputc('(', fl);
                fputc('.', fl);
                fputc('_', fl);
                fputc('.', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "ouch") == 0){ // "ouch"
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "happy") == 0){//"happy"
                fputc('(', fl);
                fputc('^', fl);
                fputc('_', fl);
                fputc('^', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "happier") == 0){//"happier"
                fputc('*', fl);
                fputc('(', fl);
                fputc('^', fl);
                fputc('o', fl);
                fputc('^', fl);
                fputc(')', fl);
                fputc('*', fl);
            }
            else if (strcmp(m, "sad") == 0){//"sad"
                fputc('(', fl);
                fputc('!', fl);
                fputc('_', fl);
                fputc('!', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "bored") == 0){//"bored"
                fputc('(', fl);
                fputc('=', fl);
                fputc('_', fl);
                fputc('=', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "serious") == 0){//"serious"
                fputc('(', fl);
                fputc('o', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "wink") == 0){//"wink"
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "i messed it up") == 0){//"i messed it up"
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('-', fl);
                fputc(':', fl);
                fputc(')', fl);
            }
            else if (strcmp(m, "jealous") == 0){//"jealous"
                fputc('8', fl);
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
                fputc('8', fl);
            }
            else if (strcmp(m, "i love it") == 0){//"i love it"
                fputc('(', fl);
                fputc('*', fl);
                fputc('-', fl);
                fputc('*', fl);
                fputc(')', fl);
            }
            
            k = 0;
            
        }
    }
    fclose(fl);