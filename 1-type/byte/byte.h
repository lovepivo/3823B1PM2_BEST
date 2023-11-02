unsigned char max_byte(unsigned short a) {
    short b,c;
    b=a<<8;
    b=b>>8;
    c=(a>>8);
    if (b>c){
        return (unsigned char) b;
    }
    return (unsigned char)c; // Not implementation
}
