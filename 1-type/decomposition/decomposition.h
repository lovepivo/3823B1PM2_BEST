int reverse(int number) {
    int a=0;
    a=((number)%10)*1000+((number)/10%10)*100+((number)/100%10)*10+((number)/1000);
    return a; // Not implementation
}

double decomposition(int x) {
    int x1,x2,x3,x4;
    x1=x%10;
    x2=x%100/10;
    x3=x%1000/100;
    x4=x%10000/1000;
    double a;
    a=4.0/(1.0/(x4*1000)+1.0/(x3*100)+1.0/(x2*10)+1.0/x1);
    return a; // Not implementation
}

int append(int number, int start, int end) {
    int a;
    if (start<0){
        number=number*(-1);
        end=end*(-1);
    }
    a=start*100000+number*10+end;
    return a; // Not implementation
}
