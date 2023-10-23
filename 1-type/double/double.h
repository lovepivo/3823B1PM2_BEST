#include <math.h>
bool compare_double(double x, double y) {
    if (x>y){
        return true;
    }
    else{
        return false;
    }
 // Not implementation
}

int get_nearest_int(double x) {
    int b=round(x);
    return b; // Not implementation
}

double get_fractional(double x) {
    double a,b;
    b=((int)x*10)%10;
    return b; // Not implementation
}
