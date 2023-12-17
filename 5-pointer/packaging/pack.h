#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size>8) return 0;
    unsigned long long a=0;
    unsigned long long int b=1;
    a+=arr[0];
    for (int i=1; i<size; i++){
        b=b*256;
        a+=arr[i]*b;
    }
    return a;

}

unsigned char unpack_ull(unsigned long long input){
    unsigned char a1=(unsigned char)(input>>32);
    return a1;
}