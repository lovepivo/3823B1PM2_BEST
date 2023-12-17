#include <math.h>

int calcsize(void* memory){
    char* a=memory;
    int i=0, b, c=1;
    while (c!=0){
        if (a[i]==11){
            b=i;
        }
        if (a[i]==47){
            return i+i-b;
        }
        i++;
    }
}
