#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char a1=(unsigned char)input, a2=(unsigned char)(input >>8), a3=(unsigned char)(input >>16), a4=(unsigned char)(input >>24);
    return a1*256*256*256+a2*256*256+a3*256+a4;
}