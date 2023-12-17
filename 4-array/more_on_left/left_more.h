char left_more(double input[], unsigned int size){
    int a=0;
    for (int i=1; i<size; i++){
        if (input[i-1]<input[i]) a+=1;
    }
    return a;
}