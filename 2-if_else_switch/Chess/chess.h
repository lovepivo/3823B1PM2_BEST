int chess_rook(char a, int b, char c, int d){
    if((a==c||b==d)&&(a!=c||b!=d)&&(a<73 && c<73)&&(b<9 && d<9)){
        return 1;
    }
    return 0;
}