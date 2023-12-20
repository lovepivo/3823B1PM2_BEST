#include <math.h>

int nod(int first, int second){
    if (first<=0 || second<=0) return -1;
    if (first==second) return first;
    return nod(fmin(first,second), fmax(first,second)-fmin(first,second));
}
