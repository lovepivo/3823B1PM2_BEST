long long change(int a, int b, int c, int d){
    long long int q1=a*100+b, q2=c*100+d;
    if (q1>q2){
        return -1;
    }
    return q2-q1;
}