int num_invers(int num){
    int a,b=0;
    while (num!=0){
        a=num%10;
        b=b*10+a;
        num/=10;
    }
    return b;
}