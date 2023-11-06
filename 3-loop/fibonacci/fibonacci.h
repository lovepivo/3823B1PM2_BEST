long fib(int m){
    int a1=0, a2=1, a3,s=0;
    if (m<0){
        return -1;
    }
    while (a2<=m){
        s=s+a2;
        a3=a2;
        a2=a1+a2;
        a1=a3;
    }
    return s;
}