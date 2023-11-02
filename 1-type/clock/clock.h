int get_time(long long angle) {
    int a,b,c,d;
    angle=(int)angle/6;
    a=(int)(angle%60);
    b=(int)(angle%3600)/60;
    c=(int)angle/36000;
    d=c*10000+b*100+a;
    return d; // Not implementation
}