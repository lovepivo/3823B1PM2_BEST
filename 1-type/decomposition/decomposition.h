int reverse(int number) {
    int a=0;
    a=((number)%10)*1000+((number)/10%10)*100+((number)/100%10)*10+((number)/1000);
    return a; // Not implementation
}

double decomposition(int number) {
    int a;
    a=4/(1/(number%10)+1/((number/10%10)*10)+1/((number/100%10)*100)+1/((number/1000)*1000));
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
