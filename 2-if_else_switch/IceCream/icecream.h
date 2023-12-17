int icecream(int x){
    int a=x;
    if (a==0) return 0;
    if (a%5==0 || a%3==0) return 1;
    for (int i=0; i<5; i++){
        a-=3;
        if (a<0) return 0;
        if (a%5==0) return 1;

    }
    for (int i=0; i<3; i++){
        a-=5;
        if (a<0) return 0;
        if (a%3==0) return 1;
    }

    return 0;
}