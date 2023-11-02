int chocolate(int n, int m, int k){
    if((n>0&&m>0)&&(k%n==0||k%m==0)){
        return 1;
    }
    return 0;
}