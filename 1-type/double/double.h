#include <math.h>
bool compare_double(double x, double y) {
    if (fabs(x-y)<0.000001){
        return true;
    }
    return false;

}

int get_nearest_int(double x) {
    int b=round(x);
    return b; // Not implementation
}

double get_fractional(double x) {
    double a,b;
    if (x<0){
        b=x-(int)x+1;
    }
    else{
        b=x-(int)x;
    }
    return b; // Not implementation
}
