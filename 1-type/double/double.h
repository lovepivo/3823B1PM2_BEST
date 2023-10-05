bool compare_double(double x, double y) {
    double a,b;
    scanf_s("%d, %d", &a, &b);
    if (a>b){
        return true;
    }
    else{
        return false;
    }
 // Not implementation
}

int get_nearest_int(double x) {
    double a;
    int b;
    scanf_s("%d", &a);
    b=round(a);
    return b; // Not implementation
}

double get_fractional(double x) {
    double a,b;
    scanf_s("%d", &a);
    b=(a*10)%10;
    return b; // Not implementation
}
