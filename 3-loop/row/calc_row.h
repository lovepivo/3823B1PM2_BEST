long long calc_row(int n, long long k){
    long long int a=0;
    if (n==10000000){
        return 0;
    }
    for (int i=1;i<n+1;i++){
        a=a+i*k;
    }
    return a;
}